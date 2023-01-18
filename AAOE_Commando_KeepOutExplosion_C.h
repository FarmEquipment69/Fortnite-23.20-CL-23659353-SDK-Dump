// BlueprintGeneratedClass /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
// Size: 0xa60
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x668 (0x8)
	class UAudioComponent* AOEAudioEffect; // 0x670 (0x8)
	class UParticleSystemComponent* PGrenadeLinger; // 0x678 (0x8)
	class USphereComponent* DamageArea; // 0x680 (0x8)
	class USceneComponent* DefaultSceneRoot; // 0x688 (0x8)
	double Radius; // 0x690 (0x8)
	struct FSoundAttenuationSettings AOESoundAttenuationBasedOnRadius; // 0x698 (0x3c8)

	/* Functions */

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius (Has no native function)
	void OnRepRadius(struct FSoundAttenuationSettings& CallFuncBPGetAttenuationSettingsToApplyOutAttenuationSettings, bool& CallFuncBPGetAttenuationSettingsToApplyReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FSoundAttenuationSettings& K2NodeMakeStructSoundAttenuationSettings, float& CallFuncSetFloatParameterParamImplicitCast, float& K2NodeMakeStructFalloffDistanceImplicitCast); // (HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info (Has no native function)
	void SendInfo(double& Radius); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed (Has no native function)
	void ReceiveDestroyed(); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion (Has no native function)
	void ExecuteUbergraphAOECommandoKeepOutExplosion(int& EntryPoint, double& K2NodeCustomEventRadius, float& CallFuncSetSphereRadiusInSphereRadiusImplicitCast); // (Final | 0x00008000)
};

