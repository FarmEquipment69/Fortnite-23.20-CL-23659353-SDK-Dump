// ScriptStruct /Script/SidecarSys.SidecarFileInfo
// Size: 0x68
struct FSidecarFileInfo
{
	struct TMap<struct FString, struct FString> Meta; // 0x0 (0x50)
	bool bIsCheckedOut; // 0x50 (0x1)
	bool bOperationPending; // 0x51 (0x1)
	unsigned char unreflected_52[0x6]; // 0x52 (0x6) 
	struct FString CheckoutGuid; // 0x58 (0x10)
};

