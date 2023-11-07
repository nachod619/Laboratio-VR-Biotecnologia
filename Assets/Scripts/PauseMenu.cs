using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
//using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;

public class PauseMenu : MonoBehaviour
{

    [Header("Game Pause Menu Buttons")]
    public Button resumeButton;
    public Button menuButton;
    public Button quitButton;

    /*[SerializeField] public InputActionReference menuInputActionReference;

    public void OnEnable()
    {
        menuInputActionReference.action.started += MenuPressed;
        ResumeGame();
    }
 
    public void OnDisable()
    {
        menuInputActionReference.action.started -= MenuPressed;
        PauseGame();
 
    }*/

    public static bool GameIsPaused = false;

    public List<Button> returnButtons;

    public GameObject pauseMenuUI;


    // Start is called before the first frame update
    void Start()
    {
        ResumeGame();

        resumeButton.onClick.AddListener(ResumeGame);
        menuButton.onClick.AddListener(LoadMenu);
        quitButton.onClick.AddListener(QuitGame);

        foreach (var item in returnButtons)
        {
            item.onClick.AddListener(ResumeGame);
        }

    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        //if (menuInputActionReference.action.started = MenuPressed)
        {
            if (GameIsPaused)
            {
                ResumeGame();
            }else
            {
                PauseGame();
            }
        }
    }

    public void QuitGame()
    {
        Application.Quit();
    }

    public void ResumeGame()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;  // descongela el juego de la pausa
        GameIsPaused = false;
    }

    public void PauseGame()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;  // congela el juego en pausa 
        GameIsPaused = true;
    }

    public void LoadMenu()
    {
        //SceneManager.LoadScene("Start Scene");
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;  // descongela el juego de la pausa
        GameIsPaused = false;
        SceneTransitionManager.singleton.GoToSceneAsync(0);
    }


}
