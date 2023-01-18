// ScriptStruct /Script/FortniteGame.SavedCredentials
// Size: 0x28
struct FSavedCredentials
{
	enum ESavedAccountType Type; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString ID; // 0x8 (0x10)
	struct FString Token; // 0x18 (0x10)
};

