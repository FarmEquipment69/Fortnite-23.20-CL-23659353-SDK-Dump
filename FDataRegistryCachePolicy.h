// ScriptStruct /Script/DataRegistry.DataRegistryCachePolicy
// Size: 0x14
struct FDataRegistryCachePolicy
{
	bool bCacheIsAlwaysVolatile; // 0x0 (0x1)
	bool bUseCurveTableCacheVersion; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int MinNumberKept; // 0x4 (0x4)
	int MaxNumberKept; // 0x8 (0x4)
	float ForceKeepSeconds; // 0xc (0x4)
	float ForceReleaseSeconds; // 0x10 (0x4)
};

