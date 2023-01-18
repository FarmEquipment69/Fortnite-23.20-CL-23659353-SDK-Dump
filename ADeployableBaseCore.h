// Class /Script/FortniteGame.DeployableBaseCore
// Size: 0xa38
class ADeployableBaseCore : public ABuildingGameplayActor
{
	class ADeployableBasePlot* Plot; // 0x9d8 (0x8)
	struct TWeakObjectPtr<class UParticleSystem> SimpleDeathParticles; // 0x9e0 (0x28)
	struct TWeakObjectPtr<class USoundBase> SimpleDeathSound; // 0xa08 (0x28)
	unsigned char bRegisterAsGlobalGameplayEventListener; // 0xa30 (0x1)
	unsigned char padding_a31[0x7]; // 0xa31 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.DeployableBaseCore.GetSimpleDeathFXTransform (Underlying native function: GetSimpleDeathFXTransform 0x862c790)
	struct FTransform GetSimpleDeathFXTransform(); // (Native | Event | Protected | HasDefaults | BlueprintEvent | Const)
};

