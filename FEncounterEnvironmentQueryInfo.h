// ScriptStruct /Script/FortniteGame.EncounterEnvironmentQueryInfo
// Size: 0x28
struct FEncounterEnvironmentQueryInfo
{
	class UEnvQuery* EnvironmentQuery; // 0x0 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x8 (0x10)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	bool bIsDirectional; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

