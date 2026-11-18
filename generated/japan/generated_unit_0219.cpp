#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0219[277] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0,
    0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0,
    0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0,
    0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56,
};
void recomp_unit_0219_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B73BA8u;
        entry_id = (entry_delta < 1108u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0219[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B73BA8;
    case 2u: goto L_08B73BBC;
    case 3u: goto L_08B73BD8;
    case 4u: goto L_08B73BE4;
    case 5u: goto L_08B73C00;
    case 6u: goto L_08B73C0C;
    case 7u: goto L_08B73C28;
    case 8u: goto L_08B73C34;
    case 9u: goto L_08B73C50;
    case 10u: goto L_08B73C5C;
    case 11u: goto L_08B73C78;
    case 12u: goto L_08B73C84;
    case 13u: goto L_08B73CA0;
    case 14u: goto L_08B73CAC;
    case 15u: goto L_08B73CC8;
    case 16u: goto L_08B73CD4;
    case 17u: goto L_08B73CF0;
    case 18u: goto L_08B73CFC;
    case 19u: goto L_08B73D18;
    case 20u: goto L_08B73D24;
    case 21u: goto L_08B73D40;
    case 22u: goto L_08B73D4C;
    case 23u: goto L_08B73D68;
    case 24u: goto L_08B73D74;
    case 25u: goto L_08B73D90;
    case 26u: goto L_08B73D9C;
    case 27u: goto L_08B73DB8;
    case 28u: goto L_08B73DC4;
    case 29u: goto L_08B73DE0;
    case 30u: goto L_08B73DEC;
    case 31u: goto L_08B73E08;
    case 32u: goto L_08B73E14;
    case 33u: goto L_08B73E30;
    case 34u: goto L_08B73E3C;
    case 35u: goto L_08B73E58;
    case 36u: goto L_08B73E64;
    case 37u: goto L_08B73E80;
    case 38u: goto L_08B73E8C;
    case 39u: goto L_08B73EA8;
    case 40u: goto L_08B73EB4;
    case 41u: goto L_08B73ED0;
    case 42u: goto L_08B73EDC;
    case 43u: goto L_08B73EF8;
    case 44u: goto L_08B73F04;
    case 45u: goto L_08B73F20;
    case 46u: goto L_08B73F2C;
    case 47u: goto L_08B73F48;
    case 48u: goto L_08B73F54;
    case 49u: goto L_08B73F70;
    case 50u: goto L_08B73F7C;
    case 51u: goto L_08B73F98;
    case 52u: goto L_08B73FA4;
    case 53u: goto L_08B73FC4;
    case 54u: goto L_08B73FD0;
    case 55u: goto L_08B73FEC;
    case 56u: goto L_08B73FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B73BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08B73BBCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 273u, 0x08849268u>(ctx, &aot_mem) && ctx.pc == 0x08B73BBCu) goto L_08B73BBC;
    return;
L_08B73BBC:
    ctx.set_gpr(4, 2233u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2233u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28168));
    ctx.set_gpr(31, 0x08B73BD8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9084));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73BD8u) goto L_08B73BD8;
    return;
L_08B73BD8:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(31, 0x08B73BE4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 88u, 0x08840474u>(ctx, &aot_mem) && ctx.pc == 0x08B73BE4u) goto L_08B73BE4;
    return;
L_08B73BE4:
    ctx.set_gpr(4, 2238u << 16u);
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 2238u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2492));
    ctx.set_gpr(31, 0x08B73C00u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15060));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73C00u) goto L_08B73C00;
    return;
L_08B73C00:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08B73C0Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 674u, 0x08847D34u>(ctx, &aot_mem) && ctx.pc == 0x08B73C0Cu) goto L_08B73C0C;
    return;
L_08B73C0C:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(6, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32100));
    ctx.set_gpr(31, 0x08B73C28u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15908));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73C28u) goto L_08B73C28;
    return;
L_08B73C28:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08B73C34u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 795u, 0x0884AE8Cu>(ctx, &aot_mem) && ctx.pc == 0x08B73C34u) goto L_08B73C34;
    return;
L_08B73C34:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20696));
    ctx.set_gpr(31, 0x08B73C50u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15832));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73C50u) goto L_08B73C50;
    return;
L_08B73C50:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08B73C5Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 284u, 0x08849304u>(ctx, &aot_mem) && ctx.pc == 0x08B73C5Cu) goto L_08B73C5C;
    return;
L_08B73C5C:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28436));
    ctx.set_gpr(31, 0x08B73C78u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15704));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73C78u) goto L_08B73C78;
    return;
L_08B73C78:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08B73C84u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 285u, 0x08850E44u>(ctx, &aot_mem) && ctx.pc == 0x08B73C84u) goto L_08B73C84;
    return;
L_08B73C84:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4268));
    ctx.set_gpr(31, 0x08B73CA0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15480));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73CA0u) goto L_08B73CA0;
    return;
L_08B73CA0:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(31, 0x08B73CACu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15224));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 208u, 0x08848D58u>(ctx, &aot_mem) && ctx.pc == 0x08B73CACu) goto L_08B73CAC;
    return;
L_08B73CAC:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2243u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15224));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29432));
    ctx.set_gpr(31, 0x08B73CC8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15240));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73CC8u) goto L_08B73CC8;
    return;
L_08B73CC8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73CD4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19888));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 652u, 0x088526E4u>(ctx, &aot_mem) && ctx.pc == 0x08B73CD4u) goto L_08B73CD4;
    return;
L_08B73CD4:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19888));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10240));
    ctx.set_gpr(31, 0x08B73CF0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19904));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73CF0u) goto L_08B73CF0;
    return;
L_08B73CF0:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73CFCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5288));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 629u, 0x08857228u>(ctx, &aot_mem) && ctx.pc == 0x08B73CFCu) goto L_08B73CFC;
    return;
L_08B73CFC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5288));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30568));
    ctx.set_gpr(31, 0x08B73D18u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5304));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73D18u) goto L_08B73D18;
    return;
L_08B73D18:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73D24u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 139u, 0x08AB0750u>(ctx, &aot_mem) && ctx.pc == 0x08B73D24u) goto L_08B73D24;
    return;
L_08B73D24:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2219u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2268));
    ctx.set_gpr(31, 0x08B73D40u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8344));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73D40u) goto L_08B73D40;
    return;
L_08B73D40:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73D4Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 824u, 0x08AAF46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B73D4Cu) goto L_08B73D4C;
    return;
L_08B73D4C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2219u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2952));
    ctx.set_gpr(31, 0x08B73D68u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10232));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73D68u) goto L_08B73D68;
    return;
L_08B73D68:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73D74u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 905u, 0x08AAF86Cu>(ctx, &aot_mem) && ctx.pc == 0x08B73D74u) goto L_08B73D74;
    return;
L_08B73D74:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2219u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1776));
    ctx.set_gpr(31, 0x08B73D90u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10248));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73D90u) goto L_08B73D90;
    return;
L_08B73D90:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73D9Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12720));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 98u, 0x08AF066Cu>(ctx, &aot_mem) && ctx.pc == 0x08B73D9Cu) goto L_08B73D9C;
    return;
L_08B73D9C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2223u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12720));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1752));
    ctx.set_gpr(31, 0x08B73DB8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12708));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73DB8u) goto L_08B73DB8;
    return;
L_08B73DB8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73DC4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12844));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 191u, 0x08AF0D00u>(ctx, &aot_mem) && ctx.pc == 0x08B73DC4u) goto L_08B73DC4;
    return;
L_08B73DC4:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2223u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12844));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3376));
    ctx.set_gpr(31, 0x08B73DE0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12832));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73DE0u) goto L_08B73DE0;
    return;
L_08B73DE0:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73DECu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12888));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 440u, 0x08AF1B48u>(ctx, &aot_mem) && ctx.pc == 0x08B73DECu) goto L_08B73DEC;
    return;
L_08B73DEC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2223u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12888));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7020));
    ctx.set_gpr(31, 0x08B73E08u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12876));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73E08u) goto L_08B73E08;
    return;
L_08B73E08:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73E14u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    if (rt.invoke_chained_direct<&recomp_unit_0187_entry, 187u, 692u, 0x08AF2C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08B73E14u) goto L_08B73E14;
    return;
L_08B73E14:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2223u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11848));
    ctx.set_gpr(31, 0x08B73E30u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12908));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73E30u) goto L_08B73E30;
    return;
L_08B73E30:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73E3Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 407u, 0x08B01FDCu>(ctx, &aot_mem) && ctx.pc == 0x08B73E3Cu) goto L_08B73E3C;
    return;
L_08B73E3C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2224u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8324));
    ctx.set_gpr(31, 0x08B73E58u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14352));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73E58u) goto L_08B73E58;
    return;
L_08B73E58:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73E64u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 749u, 0x08ACE820u>(ctx, &aot_mem) && ctx.pc == 0x08B73E64u) goto L_08B73E64;
    return;
L_08B73E64:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2221u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6028));
    ctx.set_gpr(31, 0x08B73E80u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14564));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73E80u) goto L_08B73E80;
    return;
L_08B73E80:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73E8Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 135u, 0x08AD47D0u>(ctx, &aot_mem) && ctx.pc == 0x08B73E8Cu) goto L_08B73E8C;
    return;
L_08B73E8C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2221u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18476));
    ctx.set_gpr(31, 0x08B73EA8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14616));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73EA8u) goto L_08B73EA8;
    return;
L_08B73EA8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73EB4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14712));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 922u, 0x0885B834u>(ctx, &aot_mem) && ctx.pc == 0x08B73EB4u) goto L_08B73EB4;
    return;
L_08B73EB4:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2182u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14712));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17636));
    ctx.set_gpr(31, 0x08B73ED0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14700));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73ED0u) goto L_08B73ED0;
    return;
L_08B73ED0:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73EDCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15764));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 555u, 0x08AC5D48u>(ctx, &aot_mem) && ctx.pc == 0x08B73EDCu) goto L_08B73EDC;
    return;
L_08B73EDC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2220u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15764));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23960));
    ctx.set_gpr(31, 0x08B73EF8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15752));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73EF8u) goto L_08B73EF8;
    return;
L_08B73EF8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73F04u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20836));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 197u, 0x08AC8BACu>(ctx, &aot_mem) && ctx.pc == 0x08B73F04u) goto L_08B73F04;
    return;
L_08B73F04:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2221u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20836));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29636));
    ctx.set_gpr(31, 0x08B73F20u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20824));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73F20u) goto L_08B73F20;
    return;
L_08B73F20:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73F2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21440));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1195u, 0x08AC7EA4u>(ctx, &aot_mem) && ctx.pc == 0x08B73F2Cu) goto L_08B73F2C;
    return;
L_08B73F2C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2220u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21440));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32480));
    ctx.set_gpr(31, 0x08B73F48u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21428));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73F48u) goto L_08B73F48;
    return;
L_08B73F48:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73F54u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21604));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 719u, 0x08ACE654u>(ctx, &aot_mem) && ctx.pc == 0x08B73F54u) goto L_08B73F54;
    return;
L_08B73F54:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2221u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21604));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6512));
    ctx.set_gpr(31, 0x08B73F70u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21592));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73F70u) goto L_08B73F70;
    return;
L_08B73F70:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08B73F7Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 201u, 0x08848D00u>(ctx, &aot_mem) && ctx.pc == 0x08B73F7Cu) goto L_08B73F7C;
    return;
L_08B73F7C:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(6, 2244u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21780));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29504));
    ctx.set_gpr(31, 0x08B73F98u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21768));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 333u, 0x08805334u>(ctx, &aot_mem) && ctx.pc == 0x08B73F98u) goto L_08B73F98;
    return;
L_08B73F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B73FA4:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26904));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    (void)rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem); return;
L_08B73FC4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23408));
    (void)rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 703u, 0x088A6B14u>(ctx, &aot_mem); return;
L_08B73FD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25676), 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B73FF8;
      }
      goto L_08B73FEC;
    }
L_08B73FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08B73FF8;
L_08B73FF8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(25676));
    ctx.pc = 0x08B74000u; return;
}

void recomp_unit_0219(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0219_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_219(Runtime &runtime) {
    runtime.register_generated_unit(219u, 0x08B70000u, 16384u, &recomp_unit_0219, &recomp_unit_0219_entry);
    runtime.register_function(0x08B73BA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BBCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BD8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73BE4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C00u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C0Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C28u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C34u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C50u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C5Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C78u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73C84u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CA0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CACu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CC8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CD4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CF0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73CFCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D18u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D24u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D40u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D4Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D68u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D74u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D90u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73D9Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73DB8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73DC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73DE0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73DECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E08u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E14u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E30u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E3Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E58u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E64u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E80u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73E8Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73EA8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73EB4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73ED0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73EDCu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73EF8u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F04u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F20u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F2Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F48u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F54u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F70u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F7Cu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73F98u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FA4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FC4u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FD0u, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FECu, &recomp_unit_0219, "recomp_unit_0219");
    runtime.register_function(0x08B73FF8u, &recomp_unit_0219, "recomp_unit_0219");
}
} // namespace psprecomp
