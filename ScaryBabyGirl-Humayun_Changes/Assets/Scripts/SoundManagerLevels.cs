using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
public class SoundManagerLevels : MonoBehaviour
{
    // Start is called before the first frame update
    public AudioSource Source;
    public AudioClip SoundStart, SoundEnd , Joke;
    public UnityEvent OnStart;
    private void Reset()
    {
        Source = gameObject.AddComponent<AudioSource>();
    }
    void Start()
    {
        Source.volume = 0.3f;
        OnStart.Invoke();
    }
    public void StartsoundPlay()
    {
        Source.clip = SoundStart;
        Source.loop = true;
        Source.Play();
    }
    public void EndsoundPlay()
    {
        Source.clip = SoundEnd;
        Source.loop = false;
        Source.Play();
    }
    public void PlayJoke()
    {
        Source.clip = Joke;
        Source.loop = false;
        Source.Play();
    }
    
    public void SoundStop()
    {
        Source.loop = false;
        Source.Stop();
    }
}
