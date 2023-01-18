// ScriptStruct /Script/FortniteGame.FortCurieCableSocket
// Size: 0xe0
struct FFortCurieCableSocket
{
	struct FFortCurieCableSocketIdentifier* SocketIdentifier; // 0x0 (0x8)
	struct FVector Location; // 0x8 (0x18)
	struct FFortCurieCableSocketConnection SocketConnection; // 0x20 (0x18)
	unsigned char bAutoSendSignalOnElementAttachment; // 0x38 (0x1)
	unsigned char bAutoSendSignalOnElementDetachment; // 0x38 (0x1)
	unsigned char bAutoRouteToCurieComponentOnReceive; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct TMap<struct FGameplayTag, float> ReceivedElementToMagnitudeMap; // 0x40 (0x50)
	unsigned char padding_90[0x50]; // 0x90 (0x50)
};

