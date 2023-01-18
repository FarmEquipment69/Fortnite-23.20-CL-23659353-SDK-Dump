// UserDefinedStruct /FortWater/FluidSimulation/Blueprints/Structs/FluidForceDynamic.FluidForceDynamic
// Size: 0x70
struct FFluidForceDynamic
{
	struct TEnumAsByte<FluidDynamicForceMeshType> ForceType28DDC16EE543D2DFD3BA29C49D32198C9C; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ForceRadius32C31B527C4C367A5CA5E1DF8E49E76234; // 0x4 (0x4)
	float ForceStrength332CAA30794D1EFF60AE1C3491D011CECF; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class USceneComponent* ForceComponent34ABF6640F40D37677EF6F809E09046055; // 0x10 (0x8)
	class UMaterialInterface* MaterialOverride255A792CE8489A59E5D9B24F9E4DCFE94A; // 0x18 (0x8)
	struct FFluidForceSocketInfo SkeletalMeshSetup3151A4130440BAFFBA1DA0FE83E942A30A; // 0x20 (0x50)
};

