// Class /Script/VGameplayRst.VerseLightPropertiesBase
// Size: 0x48
class UVerseLightPropertiesBase : public UObject
{
	float Intensity; // 0x28 (0x4)
	struct FLinearColor LightColor; // 0x2c (0x10)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	class ULightComponentBase* LightComponent; // 0x40 (0x8)

	/* Functions */

	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent (Underlying native function: OnRep_LightComponent 0x709e184)
	void OnRepLightComponent(); // (Final | Native | Protected)

	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor (Underlying native function: OnRep_LightColor 0x709e124)
	void OnRepLightColor(); // (Final | Native | Protected)

	// Function /Script/VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity (Underlying native function: OnRep_Intensity 0x709e0d0)
	void OnRepIntensity(); // (Final | Native | Protected)
};

