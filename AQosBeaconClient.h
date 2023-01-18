// Class /Script/Qos.QosBeaconClient
// Size: 0x350
class AQosBeaconClient : public AOnlineBeaconClient
{
	unsigned char unreflected_350[0x350]; 

	/* Functions */

	// Function /Script/Qos.QosBeaconClient.ServerQosRequest (Underlying native function: ServerQosRequest 0x6dd1c7c)
	void ServerQosRequest(struct FString& InSessionId); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/Qos.QosBeaconClient.ClientQosResponse (Underlying native function: ClientQosResponse 0x6dd1bf8)
	void ClientQosResponse(enum EQosResponseType& Response); // (Net | NetReliable | Native | Event | Protected | NetClient)
};

