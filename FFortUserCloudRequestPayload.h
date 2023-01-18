// ScriptStruct /Script/FortniteGame.FortUserCloudRequestPayload
// Size: 0x60
struct FFortUserCloudRequestPayload
{
	struct FFortUserCloudRequestHandle* RequestHandle; // 0x0 (0x8)
	struct FUniqueNetIdRepl UserNetId; // 0x8 (0x30)
	struct FString Filename; // 0x38 (0x10)
	enum EFortUserCloudRequestType RequestType; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<unsigned char> DataBuffer; // 0x50 (0x10)
};

