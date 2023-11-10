using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.InputSystem;

public class PauseMenu : MonoBehaviour
{

    [Header("Game Pause Menu Buttons")]
    public Button resumeButton;
    public Button restartButton;
    public Button menuButton;
    public Button quitButton;

    [SerializeField] public InputAction StartButton = null;

    public static bool GameIsPaused = false;

    public List<Button> returnButtons;

    public GameObject pauseMenuUI;


    // Start is called before the first frame update
    void Start()
    {
        ResumeGame();
        StartButton.Enable();

        resumeButton.onClick.AddListener(ResumeGame);
        restartButton.onClick.AddListener(RestartGame);
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
        if (StartButton.triggered)
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

    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    public void LoadMenu()
    {
        //SceneManager.LoadScene("1 Start Scene");
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;  // descongela el juego de la pausa
        GameIsPaused = false;
        SceneTransitionManager.singleton.GoToSceneAsync(0);
    }


}
