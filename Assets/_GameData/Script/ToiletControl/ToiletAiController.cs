using SWS;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Hz
{
    public class ToiletAiController : MonoBehaviour
    {
        [SerializeField] splineMove splineMove;

        Coroutine refCoroutine;
        private void OnEnable()
        {
            splineMove.Resume();
            Debug.LogError("CallTime");
        }

        public void RestartMove()
        {
            refCoroutine = StartCoroutine(StartMove());
        }

        IEnumerator StartMove()
        {
            yield return new WaitForSeconds(2f);
            Instantiate(UiManager.instance.EarnCoinFromToilet, UiManager.instance.Canvas.transform);
            UiManager.instance.UpdateCash(50, true);
            splineMove.Reverse();
            yield return new WaitForSeconds(7f);
            splineMove.Pause();
            splineMove.reverse = false;
            this.gameObject.SetActive(false);
        }
    }
}