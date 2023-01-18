// ScriptStruct /Script/VkEngineTypes.VkTeamPublicProperties
// Size: 0x30
struct FVkTeamPublicProperties
{
	struct FString Name; // 0x0 (0x10)
	struct FString Description; // 0x10 (0x10)
	struct TArray<struct FVkTeamAuthorizedEmailDomain> EmailDomains; // 0x20 (0x10)
};

