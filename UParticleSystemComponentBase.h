// Class /Script/VGameplayRst.ParticleSystemComponentBase
// Size: 0xa0
class UParticleSystemComponentBase : public UEntityActorComponent
{
	class UVerseAssetPtr* ParticleSystemAsset; // 0x90 (0x8)
	bool bActive; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)

	/* Functions */

	// Function /Script/VGameplayRst.ParticleSystemComponentBase.OnRep_ParticleSystemAsset (Underlying native function: OnRep_ParticleSystemAsset 0x709e200)
	void OnRepParticleSystemAsset(); // (Final | Native | Protected)

	// Function /Script/VGameplayRst.ParticleSystemComponentBase.OnRep_bActive (Underlying native function: OnRep_bActive 0x709e2e4)
	void OnRepbActive(); // (Final | Native | Protected)
};

