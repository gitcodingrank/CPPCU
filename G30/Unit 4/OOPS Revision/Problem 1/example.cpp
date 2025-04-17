#include <iostream>
using namespace std;

class SmartDevice{
    protected:
    string deviceId;
    public:
    SmartDevice(string id): deviceId(id) {};
    virtual void displayInfo() = 0;
};

class SmartLight:public SmartDevice{
    protected:
    int brightnessLevel;
    public:
    SmartLight(string deviceId, int bright):SmartDevice(deviceId), brightnessLevel(bright){};
    void displayInfo()override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<< deviceId<<endl;
        cout <<"Brightness Level: "<< brightnessLevel <<"%"<<endl;
    }
    
};

class SmartLock:public SmartDevice{
    protected:
    string lock_status;
    public:
    SmartLock(string deviceId, string status):SmartDevice(deviceId), lock_status(status){};
    void displayInfo()override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<< deviceId<<endl;
        cout <<"Lock Status: "<< lock_status <<endl;
    }
};

class SmartThermostat:public SmartDevice{
    protected:
    string current_temperature;
    public:
    SmartThermostat(string deviceId, string temperature):SmartDevice(deviceId), current_temperature(temperature){};
    void displayInfo()override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<< deviceId<<endl;
        cout <<"Current Temperature:: "<< current_temperature <<"°C" <<endl;
    }
};

int main(){
    int N;
    cin>>N;

    SmartDevice* devices[N];

    for(int i=1;i<=N;i++){
        string device_type;
        cin >>device_type;

        if(device_type=="Light"){
            string deviceId;
            int brightness;
            cin>>deviceId>>brightness;
            devices[i] = new SmartLight(deviceId, brightness);
        }else if(device_type=="Lock"){
            string deviceId;
            string status;
            cin>>deviceId>>status;
            devices[i] = new SmartLock(deviceId, status);
        }else{
            string deviceId;
            string temprature;
            cin>>deviceId>>temprature;
            devices[i] = new SmartLock(deviceId, temprature);
        }

    }

    for(int i=1;i<=N;i++){
        devices[i]->displayInfo();
    }

}