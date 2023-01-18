// ScriptStruct /Script/GeometryCache.NiagaraGeometryCacheReference
// Size: 0x30
struct FNiagaraGeometryCacheReference
{
	class UGeometryCache* GeometryCache; // 0x0 (0x8)
	struct FNiagaraUserParameterBinding GeometryCacheUserParamBinding; // 0x8 (0x18)
	struct TArray<class UMaterialInterface*> OverrideMaterials; // 0x20 (0x10)
};

