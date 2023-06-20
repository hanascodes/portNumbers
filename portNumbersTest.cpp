#include<iostream>
using namespace std;

int main()
{
    int numberOfPort;
    string protocol1="File Transfer Protocol - Data";
    string protocol2="File Transfer Protocol - Control";
    string protocol3="SSH - Secure Shell";
    string protocol4="Telnet";
    string protocol5="SMTP - Simple Mail Transfer Protocol";
    string protocol6="DNS - Domain Name System";
    string protocol7="DHCP - Dynamic Host Control Protocol - Server";
    string protocol8="DHCP - Dynamic Host Control Protocol - Client";
    string protocol9="TFTP - Trivial File Transfer Protocol";
    string protocol10="HTTP - HyperText Transfer Protocol";
    string protocol11="POP3 - Post Office Protocol 3";
    string protocol12="IMAP - Internet Message Access Protocol";
    string protocol13="SNMP - Simple Network Management Protocol";
    string protocol14="HTTPS - HyperText Transfer Protocol Secure";

    string TCPorUDP;
    int pointCounter=0;

    cout<<"Note: if the protocol uses both TCP and UDP, just type in \"both\""<<endl;

    cout<<protocol1<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==20) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<" It's 20."<<endl;
    }

    cout<<protocol2<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==21) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol3<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==22) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol4<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==23) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol5<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==25) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol6<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==53) && (TCPorUDP=="both")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol7<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==67) && (TCPorUDP=="UDP" || TCPorUDP=="udp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol8<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==68) && (TCPorUDP=="UDP" || TCPorUDP=="udp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol9<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==69) && (TCPorUDP=="UDP" || TCPorUDP=="udp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol10<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==80) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol11<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==110) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol12<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==143) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol13<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==161) && (TCPorUDP=="UDP" || TCPorUDP=="udp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

    cout<<protocol14<<endl;
    cin>>numberOfPort;
    cout<<"TCP or UDP?"<<endl;
    cin>>TCPorUDP;

    if ((numberOfPort==443) && (TCPorUDP=="TCP" || TCPorUDP=="tcp")){
        cout<<"That is correct!"<<endl;
        pointCounter++;
    }
    else{
        cout<<"Incorrect."<<endl;
    }

/*ideas for improvement:
function that outputs a random protocol
function that tests
*/

    cout<<"You got "<<pointCounter<<" points on this test!";
    return 0;
}
