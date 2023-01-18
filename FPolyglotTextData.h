// ScriptStruct /Script/CoreUObject.PolyglotTextData
// Size: 0xb8
struct FPolyglotTextData
{
	enum ELocalizedTextSourceCategory category; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString NativeCulture; // 0x8 (0x10)
	struct FString Namespace; // 0x18 (0x10)
	struct FString Key; // 0x28 (0x10)
	struct FString NativeString; // 0x38 (0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48 (0x50)
	bool bIsMinimalPatch; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct FText CachedText; // 0xa0 (0x18)
};

