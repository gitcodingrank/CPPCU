#include <iostream>
using namespace std;

class SmartDevice{
    protected:
    int deviceId;
    public:
    virtual void displayInfo() = 0;
};

class SmartLight:public SmartDevice{
    //dimag lagao
};

class SmartLock:public SmartDevice{
    //dimag lagao
};

class SmartThermostat:public SmartDevice{
    //dimag lagao
};

int main(){
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        string device_type, additionalInfo;
        int deviceId;
        cin >>device_type>>deviceId>>additionalInfo;

        if(device_type=="Light"){

        }else if(device_type=="Lock"){

        }else{
            //Thermostat
        }

    }


}