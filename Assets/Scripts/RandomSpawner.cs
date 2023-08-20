using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomSpawner : MonoBehaviour
{
    public GameObject spherePrefab;
    Vector3[] Spawns = new[]{
        new Vector3(-5,1,4),
        new Vector3(6,1,3),
        new Vector3(1,1,-8),
        new Vector3(-8,1,-8)
    };
    // Start is called before the first frame update
    void Start()
    {
        Vector3 randomSpawnPosition = Spawns[Random.Range(0,4)];
        Instantiate(spherePrefab, randomSpawnPosition, Quaternion.identity);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
