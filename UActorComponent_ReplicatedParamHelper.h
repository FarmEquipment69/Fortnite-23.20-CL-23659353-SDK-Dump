// Class /Script/FortniteGame.ActorComponent_ReplicatedParamHelper
// Size: 0x410
class UActorComponent_ReplicatedParamHelper : public UActorComponent
{
	struct FMulticastInlineDelegate OnReplicatedParamChanged; // 0xa0 (0x10)
	struct FRepParamFloatArray ParamFloatsArray; // 0xb0 (0x120)
	struct FRepParamIntegerArray ParamIntegersArray; // 0x1d0 (0x120)
	struct FRepParamBoolArray ParamBoolsArray; // 0x2f0 (0x120)

	/* Functions */

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.SendParamAsInt (Underlying native function: SendParamAsInt 0x86b6040)
	bool SendParamAsInt(struct FGameplayTag& ParamTag, int& Value, bool& bForceParamDirty); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.SendParamAsFloat (Underlying native function: SendParamAsFloat 0x86b5f20)
	bool SendParamAsFloat(struct FGameplayTag& ParamTag, float& Value, bool& bForceParamDirty); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.SendParamAsBool (Underlying native function: SendParamAsBool 0x86b5e00)
	bool SendParamAsBool(struct FGameplayTag& ParamTag, bool& Value, bool& bForceParamDirty); // (BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.ResendAllParamChangedEvents (Underlying native function: ResendAllParamChangedEvents 0x86b5dec)
	void ResendAllParamChangedEvents(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.GetParamAsInt (Underlying native function: GetParamAsInt 0x86b5844)
	void GetParamAsInt(struct FGameplayTag& ParamTag, int& Value, bool& bValidParam); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.GetParamAsFloat (Underlying native function: GetParamAsFloat 0x86b572c)
	void GetParamAsFloat(struct FGameplayTag& ParamTag, float& Value, bool& bValidParam); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.ActorComponent_ReplicatedParamHelper.GetParamAsBool (Underlying native function: GetParamAsBool 0x86b5618)
	void GetParamAsBool(struct FGameplayTag& ParamTag, bool& Value, bool& bValidParam); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

