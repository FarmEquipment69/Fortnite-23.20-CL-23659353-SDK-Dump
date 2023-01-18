// ScriptStruct /Script/FortniteGame.FortEncryptionKey
// Size: 0x30
struct FFortEncryptionKey
{
	struct FName Name; // 0x0 (0x4)
	struct FGuid Guid; // 0x4 (0x10)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<unsigned char> Bytes; // 0x18 (0x10)
	enum EFortEncryptionStatus Status; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

