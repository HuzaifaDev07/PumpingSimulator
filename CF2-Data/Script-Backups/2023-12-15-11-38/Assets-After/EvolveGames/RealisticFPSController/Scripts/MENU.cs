using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace EvolveGames
{
    public class MENU : MonoBehaviour
    {
        [Header("MENU")]
        [SerializeField] GameObject MenuPanel;
        [SerializeField] Animator ani;
        [SerializeField] PlayerController Player;
        [Header("Input")]
        [SerializeField] KeyCode BackKey = KeyCode.Escape;
        private void Update()
        {
            if (ControlFreak2.CF2Input.GetKeyDown(BackKey))
            {
                if (MenuPanel.activeInHierarchy)
                {
                    MenuPanel.SetActive(false);
                    Player.canMove = true;
                    ControlFreak2.CFCursor.visible = false;
                    ControlFreak2.CFCursor.lockState = CursorLockMode.Locked;
                    Time.timeScale = 1.0f;
                    ani.SetBool("START", false);
                }
                else
                {
                    MenuPanel.SetActive(true);
                    Player.canMove = false;
                    ControlFreak2.CFCursor.visible = true;
                    ControlFreak2.CFCursor.lockState = CursorLockMode.None;
                    Time.timeScale = 0.0f;
                    ani.SetBool("START", true);
                }
            }
        }
    }
}

   
