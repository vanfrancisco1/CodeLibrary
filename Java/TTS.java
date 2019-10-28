/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Pack1;

/**
 *
 * @author 201810437
 */
public class TTS {
    public static void main(String[] args) {
        TTSVO TTS = new TTSVO("kevin16");
        String Line = ""; 
        TTS.speak(Line);
    }
}
