// Class /Script/Engine.PlatformInterfaceWebResponse
// Size: 0xb0
class UPlatformInterfaceWebResponse : public UObject
{
	struct FString OriginalURL; // 0x28 (0x10)
	int ResponseCode; // 0x38 (0x4)
	int tag; // 0x3c (0x4)
	struct FString StringResponse; // 0x40 (0x10)
	struct TArray<unsigned char> BinaryResponse; // 0x50 (0x10)
	unsigned char padding_60[0x50]; // 0x60 (0x50)

	/* Functions */

	// Function /Script/Engine.PlatformInterfaceWebResponse.GetNumHeaders (Underlying native function: GetNumHeaders 0x6cc2c68)
	int GetNumHeaders(); // (Native | Public)

	// Function /Script/Engine.PlatformInterfaceWebResponse.GetHeaderValue (Underlying native function: GetHeaderValue 0x9c12b20)
	struct FString GetHeaderValue(struct FString& HeaderName); // (Native | Public)

	// Function /Script/Engine.PlatformInterfaceWebResponse.GetHeader (Underlying native function: GetHeader 0x9c12854)
	void GetHeader(int& HeaderIndex, struct FString& Header, struct FString& Value); // (Native | Public | HasOutParms)
};

