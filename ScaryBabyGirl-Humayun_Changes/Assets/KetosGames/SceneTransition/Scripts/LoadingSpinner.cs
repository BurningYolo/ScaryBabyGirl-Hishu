using UnityEngine;
using System.Collections;
using UnityEngine.UI;

namespace KetosGames.SceneTransition
{
    public class LoadingSpinner : MonoBehaviour
    {
        public float speed = 0.05f;

        [Header("Loading Screen")]
        public bool isLoading;
        public Image LoadingBar;
        public Text loading_Text;
        public GameObject loadingPanel;
        public float loadingDelayTime;

        void Update()
        {
            //Quaternion newRotation = Quaternion.AngleAxis(180, Vector3.forward);
            //transform.rotation= Quaternion.Slerp(transform.rotation, newRotation, speed);
            //if (Quaternion.Angle(transform.rotation, newRotation) < 1)
            //{
            //    transform.rotation = Quaternion.AngleAxis(0, Vector3.forward);
            //}


            if (isLoading)
            {
                LoadingBar.fillAmount += 0.006f;
                if (LoadingBar.fillAmount == 1)
                {
                    isLoading = false;
                }
            }
        }
    }
}
