using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SoundSettings : MonoBehaviour
{ 

    public void GamePlayVolume()
    {
        Slider m_slider = this.GetComponent<Slider>();
        PlayerPrefs.SetFloat("SFXVol", m_slider.value);
    }

    public void SoundVolume()
    {
        Slider m_slider = this.GetComponent<Slider>();
        PlayerPrefs.SetFloat("Vol", m_slider.value);
    }

}
