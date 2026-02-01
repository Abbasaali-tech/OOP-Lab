#include "iostream"
#include "string"
using namespace std;

// Design a class named BoardMarker with the following attributes:
//  Company (e.g., Dollar)
//  Color (e.g., black, red)
//  Refillable (Boolean – specifies if the marker can be refilled)
//  Ink status (Boolean – indicates whether the ink is empty)
// Implement appropriate getters and setters for these attributes. Additionally, include the
// following methods:
//  write() – This method should check if the ink is empty before allowing writing. If the
// ink is empty, display a message indicating that writing is not possible; otherwise,
// proceed with writing.
//  refill() – This method should verify if the marker is refillable. If it is, refill the ink and
// update the ink status; otherwise, display a message stating that the marker cannot be
// refilled.
// Demonstrate the functionality by creating 3 instances of BoardMarker, setting attribute values,
// and calling the methods to test writing and refilling operations for each of the 3 markers.

class BoardMarker{
    private:
        string Company;
        string Color;
        bool Refillable;
        bool InkStatus;
    public:
        
        void setCompany(string c){
            Company = c;
        }
        void setColor(string c){
            Color = c;
        }
        void setRefillable(bool r){
            Refillable = r;
        }
        void setInkStatus(bool i){
            InkStatus = i;
        }

        string getCompany(){
            return Company;
        }
        string getColor(){
            return Color;
        }
        bool getRefillable(){
            return Refillable;
        }
        bool getInkStatus(){
            return InkStatus;
        }

        void write(){
            if(InkStatus == false){
                cout << "Writing is not possible" << endl;
            }
            else{
                cout << "Writing is possible" << endl;
            }
        }

        void refill(){
            if(Refillable == true){
                InkStatus = true;
                cout << "Refilled" << endl;
            }
            else{
                cout << "Cannot be refilled" << endl;
            }
        }
};

int main(){
    BoardMarker marker1;
    marker1.setCompany("Dollar");
    marker1.setColor("Black");
    marker1.setRefillable(true);
    marker1.setInkStatus(false);

    cout << marker1.getCompany() << " " << marker1.getColor() << endl;
    marker1.write();
    marker1.refill();
    
    BoardMarker marker2;
    marker2.setCompany("Bic");
    marker2.setColor("Red");
    marker2.setRefillable(true);
    marker2.setInkStatus(false);
    
    cout << "--------------------------" << endl;
    cout << marker2.getCompany() << " " << marker2.getColor() << endl;
    marker2.write();
    marker2.refill();
    
    BoardMarker marker3;
    marker3.setCompany("Cello");
    marker3.setColor("Blue");
    marker3.setRefillable(false);
    marker3.setInkStatus(true);
    
    cout << "--------------------------" << endl;
    cout << marker3.getCompany() << " " << marker3.getColor() << endl;
    marker3.write();
    marker3.refill();

    return 0;
}