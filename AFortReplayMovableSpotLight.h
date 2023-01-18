// Class /Script/FortniteGame.FortReplayMovableSpotLight
// Size: 0x430
class AFortReplayMovableSpotLight : public AFortReplaySpectatorPawnBase
{
	class USpotLightComponent* SpotLightComp; // 0x400 (0x8)
	bool bGroupMoveLocked; // 0x408 (0x1)
	unsigned char unreflected_409[0x3]; // 0x409 (0x3) 
	int LightIndex; // 0x40c (0x4)
	float RepInnerAngle; // 0x410 (0x4)
	float RepOuterAngle; // 0x414 (0x4)
	float RepIntensity; // 0x418 (0x4)
	float RepRadius; // 0x41c (0x4)
	unsigned char RepColorR; // 0x420 (0x1)
	unsigned char RepColorG; // 0x421 (0x1)
	unsigned char RepColorB; // 0x422 (0x1)
	unsigned char unreflected_423[0x1]; // 0x423 (0x1) 
	float RepTemperature; // 0x424 (0x4)
	bool bRepEnabled; // 0x428 (0x1)
	bool bDebugDraw; // 0x429 (0x1)
	unsigned char padding_42a[0x6]; // 0x42a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepTemperature (Underlying native function: OnRep_RepTemperature 0x8e48534)
	void OnRepRepTemperature(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepRadius (Underlying native function: OnRep_RepRadius 0x8e484e8)
	void OnRepRepRadius(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepOuterAngle (Underlying native function: OnRep_RepOuterAngle 0x8e4849c)
	void OnRepRepOuterAngle(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepIntensity (Underlying native function: OnRep_RepIntensity 0x8e48450)
	void OnRepRepIntensity(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepInnerAngle (Underlying native function: OnRep_RepInnerAngle 0x8e48404)
	void OnRepRepInnerAngle(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepEnabled (Underlying native function: OnRep_RepEnabled 0x8e483bc)
	void OnRepRepEnabled(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortReplayMovableSpotLight.OnRep_RepColor (Underlying native function: OnRep_RepColor 0x8e48390)
	void OnRepRepColor(); // (Final | Native | Public)
};

