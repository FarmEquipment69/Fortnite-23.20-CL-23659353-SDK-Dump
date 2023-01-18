// Class /Script/EasyAntiCheatCommon.EasyAntiCheatNetComponent
// Size: 0xa8
class UEasyAntiCheatNetComponent : public UActorComponent
{
	unsigned char unreflected_a8[0xa8]; 

	/* Functions */

	// Function /Script/EasyAntiCheatCommon.EasyAntiCheatNetComponent.ServerMessage (Underlying native function: ServerMessage 0xa42dccc)
	void ServerMessage(struct TArray<unsigned char>& message); // (Net | NetReliable | Native | Event | Public | NetServer | 0x80000000)

	// Function /Script/EasyAntiCheatCommon.EasyAntiCheatNetComponent.ClientMessage (Underlying native function: ClientMessage 0xa42dc38)
	void ClientMessage(struct TArray<unsigned char>& message); // (Net | NetReliable | Native | Event | Public | NetClient)
};

