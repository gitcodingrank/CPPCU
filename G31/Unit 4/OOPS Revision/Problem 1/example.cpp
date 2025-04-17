#include <iostream>
using namespace std;

//abstract class
class SmartDevice{
    protected:
    string deviceID;
    public:
    SmartDevice(string id):deviceID(id){};
    virtual void displayInfo() = 0;
};

class SmartLight: public SmartDevice{
    protected:
    int brightnessLevel;
    public:
    SmartLight(string deviceId, int bl):SmartDevice(deviceId), brightnessLevel(bl){};

    void displayInfo() override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<<deviceID<<endl;
        cout <<"Brithtness Level: "<<brightnessLevel<<"%"<<endl;
    }
};

class SmartLock: public SmartDevice{
    protected:
    string lockStatus;
    public:
    SmartLock(string deviceId, string status):SmartDevice(deviceId), lockStatus(status){};

    void displayInfo() override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<<deviceID<<endl;
        cout <<"Lock Status: "<<lockStatus<<endl;
    }
};

class SmartThermostat: public SmartDevice{
    protected:
    int currentTemprature;
    public:
    SmartThermostat(string deviceId, int temprature):SmartDevice(deviceId), currentTemprature(temprature){};
    void displayInfo() override{
        cout <<"Smart Device Details:"<<endl;
        cout <<"Device ID: "<<deviceID<<endl;
        cout <<"Current Temprature: "<<currentTemprature<<"°C"<<endl;
    }
};

int main(){
    int N;
    cin>>N;

    SmartDevice* devices[N];

    for(int i=1;i<=N;i++){
        string device_type, deviceId;
        cin>>device_type>>deviceId;

        if(device_type=="Light"){
            int brightL;
            cin>>brightL;
            devices[i] = new SmartLight(deviceId, brightL);
        }else if(device_type=="Lock"){
            string status;
            cin>>status;
            devices[i] = new SmartLock(deviceId, status);
        }else{
            int temprature;
            cin>>temprature;
            devices[i] = new SmartThermostat(deviceId, temprature);
        }
    }

    for(int i=1;i<=N;i++){
        devices[i]->displayInfo();
    }

}