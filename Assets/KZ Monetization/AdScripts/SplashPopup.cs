using UnityEngine;
using UnityEngine.Events;

public class SplashPopup : MonoBehaviour
{
    public GameObject PolicyPanel;
    [SerializeField] LoadingScript loadingScript;
    public UnityEvent OnPolicyAccept;

    void Start()
    {
        if (AdConstants.PolicyAccepted)
            OnPolicyAccepted();
        else
            PolicyPanel.gameObject.SetActive(true);
    }

    public void Accept()
    {
        AdConstants.AcceptPolicy();
        OnPolicyAccepted();
    }

    public void VisitWebsite()
    {
        AdsManager.Instance.VisitWebsite();
    }

    void OnPolicyAccepted()
    {
        AdsManager.Instance.Initialize_AdNetworks();
        PolicyPanel.gameObject.SetActive(false);
        LoadScene();
        OnPolicyAccept?.Invoke();
    }

    public void LoadScene()
    {
        loadingScript.gameObject.SetActive(true);
        loadingScript.Scene("Gameplay");
    }

}
