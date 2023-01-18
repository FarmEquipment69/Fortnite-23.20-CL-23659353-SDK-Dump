// Class /Script/GameFeatures.GameFeaturesSubsystem
// Size: 0x150
class UGameFeaturesSubsystem : public UEngineSubsystem
{
	struct TMap<struct FGameFeaturePluginIdentifier, class UGameFeaturePluginStateMachine*> GameFeaturePluginStateMachines; // 0x30 (0x50)
	struct TArray<class UGameFeaturePluginStateMachine*> TerminalGameFeaturePluginStateMachines; // 0x80 (0x10)
	unsigned char unreflected_90[0xa0]; // 0x90 (0xa0) 
	struct TArray<class UObject*> Observers; // 0x130 (0x10)
	class UGameFeaturesProjectPolicies* GameSpecificPolicies; // 0x140 (0x8)
	unsigned char padding_148[0x8]; // 0x148 (0x8)
};

