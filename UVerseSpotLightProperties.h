// Class /Script/VGameplayRst.VerseSpotLightProperties
// Size: 0x60
class UVerseSpotLightProperties : public UVersePointLightProperties
{
	float InnerConeAngle; // 0x58 (0x4)
	float OuterConeAngle; // 0x5c (0x4)

	/* Functions */

	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle (Underlying native function: OnRep_OuterConeAngle 0x709e1ac)
	void OnRepOuterConeAngle(); // (Final | Native | Public)

	// Function /Script/VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle (Underlying native function: OnRep_InnerConeAngle 0x709e07c)
	void OnRepInnerConeAngle(); // (Final | Native | Public)
};

