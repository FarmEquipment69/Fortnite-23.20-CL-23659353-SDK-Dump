// ScriptStruct /Script/FortniteGame.EmoteActivationTrigger
// Size: 0xb8
struct FEmoteActivationTrigger
{
	struct FGameplayTagQuery EmoteTagQuery; // 0x0 (0x48)
	struct FGameplayTagQuery PlayerTagQuery; // 0x48 (0x48)
	struct FGameplayTagContainer TagsToApply; // 0x90 (0x20)
	float Duration; // 0xb0 (0x4)
	unsigned char padding_b4[0x4]; // 0xb4 (0x4)
};

