using SickscoreGames.HUDNavigationSystem;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class TrashBagControl : MonoBehaviour
{
    public enum TrashType
    {
        trashBag,
        trashCan,
    }
    public TrashType trashType;
    public HUDNavigationElement hudNavigationElement;
    public Collider _collider;
    // Start is called before the first frame update
    void Start()
    {
        _collider.enabled = true;
        if (PrefData.GetTask() >= 2)
        {

            switch (trashType)
            {
                case TrashType.trashBag:
                    hudNavigationElement.enabled = true;
                    transform.gameObject.tag = "Trash";
                    break;
                case TrashType.trashCan:
                    hudNavigationElement.enabled = false;
                    transform.gameObject.tag = "Dustbin";
                    break;
                default:
                    break;
            }
        }
        else
        {
            hudNavigationElement.enabled = false;
            transform.gameObject.tag = "Untagged";
        }
    }

    private void OnDisable()
    {
        if (Application.isPlaying && PrefData.GetTask() == 2)
            GameManager.Instance.TrashCounter++;
        if (Application.isPlaying && GameManager.Instance.TrashCounter == 3)
        {
            PrefData.SetTask(true, 1);
            GameManager.Instance.ShowObjective(PrefData.GetTask());
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
    }
}
