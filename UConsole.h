// Class /Script/Engine.Console
// Size: 0x130
class UConsole : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class ULocalPlayer* ConsoleTargetPlayer; // 0x38 (0x8)
	class UTexture2D* DefaultTextureBlack; // 0x40 (0x8)
	class UTexture2D* DefaultTextureWhite; // 0x48 (0x8)
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	struct TArray<struct FString> HistoryBuffer; // 0x68 (0x10)
	unsigned char padding_78[0xb8]; // 0x78 (0xb8)
};

