// ScriptStruct /Script/Engine.LightmassDebugOptions
// Size: 0x10
struct FLightmassDebugOptions
{
	unsigned char bDebugMode; // 0x0 (0x1)
	unsigned char bStatsEnabled; // 0x0 (0x1)
	unsigned char bGatherBSPSurfacesAcrossComponents; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float CoplanarTolerance; // 0x4 (0x4)
	unsigned char bUseImmediateImport; // 0x8 (0x1)
	unsigned char bImmediateProcessMappings; // 0x8 (0x1)
	unsigned char bSortMappings; // 0x8 (0x1)
	unsigned char bDumpBinaryFiles; // 0x8 (0x1)
	unsigned char bDebugMaterials; // 0x8 (0x1)
	unsigned char bPadMappings; // 0x8 (0x1)
	unsigned char bDebugPaddings; // 0x8 (0x1)
	unsigned char bOnlyCalcDebugTexelMappings; // 0x8 (0x1)
	unsigned char bUseRandomColors; // 0x9 (0x1)
	unsigned char bColorBordersGreen; // 0x9 (0x1)
	unsigned char bColorByExecutionTime; // 0x9 (0x1)
	unsigned char unreflected_a[0x2]; // 0xa (0x2) 
	float ExecutionTimeDivisor; // 0xc (0x4)
};

