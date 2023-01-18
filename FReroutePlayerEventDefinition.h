// ScriptStruct /Script/FortniteGame.ReroutePlayerEventDefinition
// Size: 0x68
struct FReroutePlayerEventDefinition
{
	struct FGameplayTagContainer IncomingEventTags; // 0x0 (0x20)
	struct FGameplayTagContainer IncludeTags; // 0x20 (0x20)
	struct FGameplayTagContainer ExcludeTags; // 0x40 (0x20)
	struct FGameplayTag ImmediateOutgoingEventTag; // 0x60 (0x4)
	struct FGameplayTag MergedOutgoingEventTag; // 0x64 (0x4)
};

