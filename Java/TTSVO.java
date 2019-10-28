/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Pack1;
import com.sun.speech.freetts.VoiceManager;
/**
 *
 * @author 201810437
 */
public class TTSVO {
   private String name;
   private com.sun.speech.freetts.Voice voice;
   
   public TTSVO(String name)
    {
     this.name = name;
     this.voice = VoiceManager.getInstance().getVoice(this.name);
     this.voice.allocate();
    }
   public void speak(String say)
   {
       this.voice.speak(say);
   }
}
