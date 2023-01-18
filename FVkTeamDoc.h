// ScriptStruct /Script/VkEngineTypes.VkTeamDoc
// Size: 0x90
struct FVkTeamDoc
{
	struct FString TeamId; // 0x0 (0x10)
	struct FDateTime* Created; // 0x10 (0x8)
	struct FDateTime* Updated; // 0x18 (0x8)
	struct FVkTypedId Owner; // 0x20 (0x18)
	struct FVkTeamPublicProperties PublicProps; // 0x38 (0x30)
	int MemberCount; // 0x68 (0x4)
	unsigned char unreflected_6c[0x4]; // 0x6c (0x4) 
	struct FJsonObjectWrapper SysMeta; // 0x70 (0x20)
};

