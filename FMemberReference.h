// ScriptStruct /Script/Engine.MemberReference
// Size: 0x30
struct FMemberReference
{
	class UObject* MemberParent; // 0x0 (0x8)
	struct FString MemberScope; // 0x8 (0x10)
	struct FName MemberName; // 0x18 (0x4)
	struct FGuid MemberGuid; // 0x1c (0x10)
	bool bSelfContext; // 0x2c (0x1)
	bool bWasDeprecated; // 0x2d (0x1)
	unsigned char padding_2e[0x2]; // 0x2e (0x2)
};

