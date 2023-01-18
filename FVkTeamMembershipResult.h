// ScriptStruct /Script/VkEngineTypes.VkTeamMembershipResult
// Size: 0xa8
struct FVkTeamMembershipResult
{
	struct FString Name; // 0x0 (0x10)
	struct TMap<struct FString, bool> Access; // 0x10 (0x50)
	struct FString Status; // 0x60 (0x10)
	struct FString MembershipId; // 0x70 (0x10)
	struct FString TeamId; // 0x80 (0x10)
	struct FString AccountId; // 0x90 (0x10)
	struct FDateTime* Updated; // 0xa0 (0x8)
};

