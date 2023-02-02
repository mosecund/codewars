package com.company;

public class L1SetAlarm {
    public class Alarm {

        public static boolean setAlarm(boolean employed, boolean vacation) {
            if (employed){
                if (vacation){
                    return false;}
                return true;}
            else
                return false;

        }

    }
}
