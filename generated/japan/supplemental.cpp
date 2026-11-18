#include "psprecomp/runtime.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_diva_static_initializers[254] = {
    1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 0, 11, 12, 0, 13, 14, 15, 16, 17, 18, 0, 19, 20, 0, 21, 22, 23, 24, 25, 26, 0,
    27, 28, 0, 29, 30, 31, 32, 33, 34, 0, 35, 36, 0, 37, 38, 39, 40, 41, 42, 0, 43, 44, 0, 45, 46, 47, 48, 49, 50, 0, 51, 52,
    0, 53, 54, 55, 56, 57, 58, 0, 59, 60, 0, 61, 62, 63, 64, 65, 66, 0, 67, 68, 0, 69, 70, 71, 72, 73, 74, 0, 75, 76, 0, 77,
    78, 79, 80, 81, 82, 0, 83, 84, 0, 85, 86, 87, 88, 89, 90, 0, 91, 92, 0, 93, 94, 95, 96, 97, 98, 0, 99, 100, 0, 101, 102, 103,
    104, 105, 106, 0, 107, 108, 0, 109, 110, 111, 112, 113, 114, 0, 115, 116, 0, 117, 118, 119, 120, 121, 122, 0, 123, 124, 0, 125, 126, 127, 128, 129,
    130, 0, 131, 132, 0, 133, 134, 135, 136, 137, 138, 0, 139, 140, 0, 141, 142, 143, 144, 145, 146, 0, 147, 148, 0, 149, 150, 151, 152, 153, 154, 0,
    155, 156, 0, 157, 158, 159, 160, 161, 162, 0, 163, 164, 0, 165, 166, 167, 168, 169, 170, 0, 171, 172, 0, 173, 174, 175, 176, 177, 178, 0, 179, 180,
    0, 181, 182, 183, 184, 185, 186, 0, 187, 188, 0, 189, 190, 191, 192, 193, 194, 0, 195, 196, 0, 197, 198, 199, 200, 201, 202, 0, 203, 204,
};
void diva_static_initializers_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B73BA8u;
        entry_id = (entry_delta < 1016u && (entry_delta & 3u) == 0u) ? kEntryIds_diva_static_initializers[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B73BA8;
    case 2u: goto L_08B73BAC;
    case 3u: goto L_08B73BB0;
    case 4u: goto L_08B73BB4;
    case 5u: goto L_08B73BBC;
    case 6u: goto L_08B73BC0;
    case 7u: goto L_08B73BC4;
    case 8u: goto L_08B73BC8;
    case 9u: goto L_08B73BCC;
    case 10u: goto L_08B73BD0;
    case 11u: goto L_08B73BD8;
    case 12u: goto L_08B73BDC;
    case 13u: goto L_08B73BE4;
    case 14u: goto L_08B73BE8;
    case 15u: goto L_08B73BEC;
    case 16u: goto L_08B73BF0;
    case 17u: goto L_08B73BF4;
    case 18u: goto L_08B73BF8;
    case 19u: goto L_08B73C00;
    case 20u: goto L_08B73C04;
    case 21u: goto L_08B73C0C;
    case 22u: goto L_08B73C10;
    case 23u: goto L_08B73C14;
    case 24u: goto L_08B73C18;
    case 25u: goto L_08B73C1C;
    case 26u: goto L_08B73C20;
    case 27u: goto L_08B73C28;
    case 28u: goto L_08B73C2C;
    case 29u: goto L_08B73C34;
    case 30u: goto L_08B73C38;
    case 31u: goto L_08B73C3C;
    case 32u: goto L_08B73C40;
    case 33u: goto L_08B73C44;
    case 34u: goto L_08B73C48;
    case 35u: goto L_08B73C50;
    case 36u: goto L_08B73C54;
    case 37u: goto L_08B73C5C;
    case 38u: goto L_08B73C60;
    case 39u: goto L_08B73C64;
    case 40u: goto L_08B73C68;
    case 41u: goto L_08B73C6C;
    case 42u: goto L_08B73C70;
    case 43u: goto L_08B73C78;
    case 44u: goto L_08B73C7C;
    case 45u: goto L_08B73C84;
    case 46u: goto L_08B73C88;
    case 47u: goto L_08B73C8C;
    case 48u: goto L_08B73C90;
    case 49u: goto L_08B73C94;
    case 50u: goto L_08B73C98;
    case 51u: goto L_08B73CA0;
    case 52u: goto L_08B73CA4;
    case 53u: goto L_08B73CAC;
    case 54u: goto L_08B73CB0;
    case 55u: goto L_08B73CB4;
    case 56u: goto L_08B73CB8;
    case 57u: goto L_08B73CBC;
    case 58u: goto L_08B73CC0;
    case 59u: goto L_08B73CC8;
    case 60u: goto L_08B73CCC;
    case 61u: goto L_08B73CD4;
    case 62u: goto L_08B73CD8;
    case 63u: goto L_08B73CDC;
    case 64u: goto L_08B73CE0;
    case 65u: goto L_08B73CE4;
    case 66u: goto L_08B73CE8;
    case 67u: goto L_08B73CF0;
    case 68u: goto L_08B73CF4;
    case 69u: goto L_08B73CFC;
    case 70u: goto L_08B73D00;
    case 71u: goto L_08B73D04;
    case 72u: goto L_08B73D08;
    case 73u: goto L_08B73D0C;
    case 74u: goto L_08B73D10;
    case 75u: goto L_08B73D18;
    case 76u: goto L_08B73D1C;
    case 77u: goto L_08B73D24;
    case 78u: goto L_08B73D28;
    case 79u: goto L_08B73D2C;
    case 80u: goto L_08B73D30;
    case 81u: goto L_08B73D34;
    case 82u: goto L_08B73D38;
    case 83u: goto L_08B73D40;
    case 84u: goto L_08B73D44;
    case 85u: goto L_08B73D4C;
    case 86u: goto L_08B73D50;
    case 87u: goto L_08B73D54;
    case 88u: goto L_08B73D58;
    case 89u: goto L_08B73D5C;
    case 90u: goto L_08B73D60;
    case 91u: goto L_08B73D68;
    case 92u: goto L_08B73D6C;
    case 93u: goto L_08B73D74;
    case 94u: goto L_08B73D78;
    case 95u: goto L_08B73D7C;
    case 96u: goto L_08B73D80;
    case 97u: goto L_08B73D84;
    case 98u: goto L_08B73D88;
    case 99u: goto L_08B73D90;
    case 100u: goto L_08B73D94;
    case 101u: goto L_08B73D9C;
    case 102u: goto L_08B73DA0;
    case 103u: goto L_08B73DA4;
    case 104u: goto L_08B73DA8;
    case 105u: goto L_08B73DAC;
    case 106u: goto L_08B73DB0;
    case 107u: goto L_08B73DB8;
    case 108u: goto L_08B73DBC;
    case 109u: goto L_08B73DC4;
    case 110u: goto L_08B73DC8;
    case 111u: goto L_08B73DCC;
    case 112u: goto L_08B73DD0;
    case 113u: goto L_08B73DD4;
    case 114u: goto L_08B73DD8;
    case 115u: goto L_08B73DE0;
    case 116u: goto L_08B73DE4;
    case 117u: goto L_08B73DEC;
    case 118u: goto L_08B73DF0;
    case 119u: goto L_08B73DF4;
    case 120u: goto L_08B73DF8;
    case 121u: goto L_08B73DFC;
    case 122u: goto L_08B73E00;
    case 123u: goto L_08B73E08;
    case 124u: goto L_08B73E0C;
    case 125u: goto L_08B73E14;
    case 126u: goto L_08B73E18;
    case 127u: goto L_08B73E1C;
    case 128u: goto L_08B73E20;
    case 129u: goto L_08B73E24;
    case 130u: goto L_08B73E28;
    case 131u: goto L_08B73E30;
    case 132u: goto L_08B73E34;
    case 133u: goto L_08B73E3C;
    case 134u: goto L_08B73E40;
    case 135u: goto L_08B73E44;
    case 136u: goto L_08B73E48;
    case 137u: goto L_08B73E4C;
    case 138u: goto L_08B73E50;
    case 139u: goto L_08B73E58;
    case 140u: goto L_08B73E5C;
    case 141u: goto L_08B73E64;
    case 142u: goto L_08B73E68;
    case 143u: goto L_08B73E6C;
    case 144u: goto L_08B73E70;
    case 145u: goto L_08B73E74;
    case 146u: goto L_08B73E78;
    case 147u: goto L_08B73E80;
    case 148u: goto L_08B73E84;
    case 149u: goto L_08B73E8C;
    case 150u: goto L_08B73E90;
    case 151u: goto L_08B73E94;
    case 152u: goto L_08B73E98;
    case 153u: goto L_08B73E9C;
    case 154u: goto L_08B73EA0;
    case 155u: goto L_08B73EA8;
    case 156u: goto L_08B73EAC;
    case 157u: goto L_08B73EB4;
    case 158u: goto L_08B73EB8;
    case 159u: goto L_08B73EBC;
    case 160u: goto L_08B73EC0;
    case 161u: goto L_08B73EC4;
    case 162u: goto L_08B73EC8;
    case 163u: goto L_08B73ED0;
    case 164u: goto L_08B73ED4;
    case 165u: goto L_08B73EDC;
    case 166u: goto L_08B73EE0;
    case 167u: goto L_08B73EE4;
    case 168u: goto L_08B73EE8;
    case 169u: goto L_08B73EEC;
    case 170u: goto L_08B73EF0;
    case 171u: goto L_08B73EF8;
    case 172u: goto L_08B73EFC;
    case 173u: goto L_08B73F04;
    case 174u: goto L_08B73F08;
    case 175u: goto L_08B73F0C;
    case 176u: goto L_08B73F10;
    case 177u: goto L_08B73F14;
    case 178u: goto L_08B73F18;
    case 179u: goto L_08B73F20;
    case 180u: goto L_08B73F24;
    case 181u: goto L_08B73F2C;
    case 182u: goto L_08B73F30;
    case 183u: goto L_08B73F34;
    case 184u: goto L_08B73F38;
    case 185u: goto L_08B73F3C;
    case 186u: goto L_08B73F40;
    case 187u: goto L_08B73F48;
    case 188u: goto L_08B73F4C;
    case 189u: goto L_08B73F54;
    case 190u: goto L_08B73F58;
    case 191u: goto L_08B73F5C;
    case 192u: goto L_08B73F60;
    case 193u: goto L_08B73F64;
    case 194u: goto L_08B73F68;
    case 195u: goto L_08B73F70;
    case 196u: goto L_08B73F74;
    case 197u: goto L_08B73F7C;
    case 198u: goto L_08B73F80;
    case 199u: goto L_08B73F84;
    case 200u: goto L_08B73F88;
    case 201u: goto L_08B73F8C;
    case 202u: goto L_08B73F90;
    case 203u: goto L_08B73F98;
    case 204u: goto L_08B73F9C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B73BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    goto L_08B73BAC;
L_08B73BAC:
    ctx.set_gpr(4, 2233u << 16u);
    goto L_08B73BB0;
L_08B73BB0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    goto L_08B73BB4;
L_08B73BB4:
    ctx.set_gpr(31, 0x08B73BBCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    ctx.pc = 0x08849268u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73BBCu) goto L_08B73BBC;
    return;
L_08B73BBC:
    ctx.set_gpr(4, 2233u << 16u);
    goto L_08B73BC0;
L_08B73BC0:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73BC4;
L_08B73BC4:
    ctx.set_gpr(6, 2233u << 16u);
    goto L_08B73BC8;
L_08B73BC8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    goto L_08B73BCC;
L_08B73BCC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28168));
    goto L_08B73BD0;
L_08B73BD0:
    ctx.set_gpr(31, 0x08B73BD8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9084));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73BD8u) goto L_08B73BD8;
    return;
L_08B73BD8:
    ctx.set_gpr(4, 2238u << 16u);
    goto L_08B73BDC;
L_08B73BDC:
    ctx.set_gpr(31, 0x08B73BE4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    ctx.pc = 0x08840474u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73BE4u) goto L_08B73BE4;
    return;
L_08B73BE4:
    ctx.set_gpr(4, 2238u << 16u);
    goto L_08B73BE8;
L_08B73BE8:
    ctx.set_gpr(5, 2180u << 16u);
    goto L_08B73BEC;
L_08B73BEC:
    ctx.set_gpr(6, 2238u << 16u);
    goto L_08B73BF0;
L_08B73BF0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15048));
    goto L_08B73BF4;
L_08B73BF4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2492));
    goto L_08B73BF8;
L_08B73BF8:
    ctx.set_gpr(31, 0x08B73C00u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15060));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C00u) goto L_08B73C00;
    return;
L_08B73C00:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C04;
L_08B73C04:
    ctx.set_gpr(31, 0x08B73C0Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    ctx.pc = 0x08847D34u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C0Cu) goto L_08B73C0C;
    return;
L_08B73C0C:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C10;
L_08B73C10:
    ctx.set_gpr(5, 2180u << 16u);
    goto L_08B73C14;
L_08B73C14:
    ctx.set_gpr(6, 2243u << 16u);
    goto L_08B73C18;
L_08B73C18:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15896));
    goto L_08B73C1C;
L_08B73C1C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32100));
    goto L_08B73C20;
L_08B73C20:
    ctx.set_gpr(31, 0x08B73C28u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15908));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C28u) goto L_08B73C28;
    return;
L_08B73C28:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C2C;
L_08B73C2C:
    ctx.set_gpr(31, 0x08B73C34u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    ctx.pc = 0x0884AE8Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C34u) goto L_08B73C34;
    return;
L_08B73C34:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C38;
L_08B73C38:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73C3C;
L_08B73C3C:
    ctx.set_gpr(6, 2243u << 16u);
    goto L_08B73C40;
L_08B73C40:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    goto L_08B73C44;
L_08B73C44:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-20696));
    goto L_08B73C48;
L_08B73C48:
    ctx.set_gpr(31, 0x08B73C50u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15832));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C50u) goto L_08B73C50;
    return;
L_08B73C50:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C54;
L_08B73C54:
    ctx.set_gpr(31, 0x08B73C5Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    ctx.pc = 0x08849304u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C5Cu) goto L_08B73C5C;
    return;
L_08B73C5C:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C60;
L_08B73C60:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73C64;
L_08B73C64:
    ctx.set_gpr(6, 2243u << 16u);
    goto L_08B73C68;
L_08B73C68:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    goto L_08B73C6C;
L_08B73C6C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28436));
    goto L_08B73C70;
L_08B73C70:
    ctx.set_gpr(31, 0x08B73C78u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15704));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C78u) goto L_08B73C78;
    return;
L_08B73C78:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C7C;
L_08B73C7C:
    ctx.set_gpr(31, 0x08B73C84u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    ctx.pc = 0x08850E44u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73C84u) goto L_08B73C84;
    return;
L_08B73C84:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73C88;
L_08B73C88:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73C8C;
L_08B73C8C:
    ctx.set_gpr(6, 2243u << 16u);
    goto L_08B73C90;
L_08B73C90:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15468));
    goto L_08B73C94;
L_08B73C94:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4268));
    goto L_08B73C98;
L_08B73C98:
    ctx.set_gpr(31, 0x08B73CA0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15480));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CA0u) goto L_08B73CA0;
    return;
L_08B73CA0:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73CA4;
L_08B73CA4:
    ctx.set_gpr(31, 0x08B73CACu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15224));
    ctx.pc = 0x08848D58u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CACu) goto L_08B73CAC;
    return;
L_08B73CAC:
    ctx.set_gpr(4, 2243u << 16u);
    goto L_08B73CB0;
L_08B73CB0:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73CB4;
L_08B73CB4:
    ctx.set_gpr(6, 2243u << 16u);
    goto L_08B73CB8;
L_08B73CB8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15224));
    goto L_08B73CBC;
L_08B73CBC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29432));
    goto L_08B73CC0;
L_08B73CC0:
    ctx.set_gpr(31, 0x08B73CC8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15240));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CC8u) goto L_08B73CC8;
    return;
L_08B73CC8:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73CCC;
L_08B73CCC:
    ctx.set_gpr(31, 0x08B73CD4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19888));
    ctx.pc = 0x088526E4u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CD4u) goto L_08B73CD4;
    return;
L_08B73CD4:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73CD8;
L_08B73CD8:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73CDC;
L_08B73CDC:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73CE0;
L_08B73CE0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19888));
    goto L_08B73CE4;
L_08B73CE4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(10240));
    goto L_08B73CE8;
L_08B73CE8:
    ctx.set_gpr(31, 0x08B73CF0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19904));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CF0u) goto L_08B73CF0;
    return;
L_08B73CF0:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73CF4;
L_08B73CF4:
    ctx.set_gpr(31, 0x08B73CFCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5288));
    ctx.pc = 0x08857228u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73CFCu) goto L_08B73CFC;
    return;
L_08B73CFC:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D00;
L_08B73D00:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73D04;
L_08B73D04:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73D08;
L_08B73D08:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5288));
    goto L_08B73D0C;
L_08B73D0C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30568));
    goto L_08B73D10;
L_08B73D10:
    ctx.set_gpr(31, 0x08B73D18u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-5304));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D18u) goto L_08B73D18;
    return;
L_08B73D18:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D1C;
L_08B73D1C:
    ctx.set_gpr(31, 0x08B73D24u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    ctx.pc = 0x08AB0750u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D24u) goto L_08B73D24;
    return;
L_08B73D24:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D28;
L_08B73D28:
    ctx.set_gpr(5, 2219u << 16u);
    goto L_08B73D2C;
L_08B73D2C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73D30;
L_08B73D30:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    goto L_08B73D34;
L_08B73D34:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2268));
    goto L_08B73D38;
L_08B73D38:
    ctx.set_gpr(31, 0x08B73D40u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8344));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D40u) goto L_08B73D40;
    return;
L_08B73D40:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D44;
L_08B73D44:
    ctx.set_gpr(31, 0x08B73D4Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    ctx.pc = 0x08AAF46Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D4Cu) goto L_08B73D4C;
    return;
L_08B73D4C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D50;
L_08B73D50:
    ctx.set_gpr(5, 2219u << 16u);
    goto L_08B73D54;
L_08B73D54:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73D58;
L_08B73D58:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10244));
    goto L_08B73D5C;
L_08B73D5C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-2952));
    goto L_08B73D60;
L_08B73D60:
    ctx.set_gpr(31, 0x08B73D68u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10232));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D68u) goto L_08B73D68;
    return;
L_08B73D68:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D6C;
L_08B73D6C:
    ctx.set_gpr(31, 0x08B73D74u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    ctx.pc = 0x08AAF86Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D74u) goto L_08B73D74;
    return;
L_08B73D74:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D78;
L_08B73D78:
    ctx.set_gpr(5, 2219u << 16u);
    goto L_08B73D7C;
L_08B73D7C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73D80;
L_08B73D80:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    goto L_08B73D84;
L_08B73D84:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1776));
    goto L_08B73D88;
L_08B73D88:
    ctx.set_gpr(31, 0x08B73D90u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10248));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D90u) goto L_08B73D90;
    return;
L_08B73D90:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73D94;
L_08B73D94:
    ctx.set_gpr(31, 0x08B73D9Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12720));
    ctx.pc = 0x08AF066Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73D9Cu) goto L_08B73D9C;
    return;
L_08B73D9C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73DA0;
L_08B73DA0:
    ctx.set_gpr(5, 2223u << 16u);
    goto L_08B73DA4;
L_08B73DA4:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73DA8;
L_08B73DA8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12720));
    goto L_08B73DAC;
L_08B73DAC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1752));
    goto L_08B73DB0;
L_08B73DB0:
    ctx.set_gpr(31, 0x08B73DB8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12708));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73DB8u) goto L_08B73DB8;
    return;
L_08B73DB8:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73DBC;
L_08B73DBC:
    ctx.set_gpr(31, 0x08B73DC4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12844));
    ctx.pc = 0x08AF0D00u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73DC4u) goto L_08B73DC4;
    return;
L_08B73DC4:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73DC8;
L_08B73DC8:
    ctx.set_gpr(5, 2223u << 16u);
    goto L_08B73DCC;
L_08B73DCC:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73DD0;
L_08B73DD0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12844));
    goto L_08B73DD4;
L_08B73DD4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3376));
    goto L_08B73DD8;
L_08B73DD8:
    ctx.set_gpr(31, 0x08B73DE0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12832));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73DE0u) goto L_08B73DE0;
    return;
L_08B73DE0:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73DE4;
L_08B73DE4:
    ctx.set_gpr(31, 0x08B73DECu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12888));
    ctx.pc = 0x08AF1B48u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73DECu) goto L_08B73DEC;
    return;
L_08B73DEC:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73DF0;
L_08B73DF0:
    ctx.set_gpr(5, 2223u << 16u);
    goto L_08B73DF4;
L_08B73DF4:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73DF8;
L_08B73DF8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12888));
    goto L_08B73DFC;
L_08B73DFC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7020));
    goto L_08B73E00;
L_08B73E00:
    ctx.set_gpr(31, 0x08B73E08u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12876));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E08u) goto L_08B73E08;
    return;
L_08B73E08:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E0C;
L_08B73E0C:
    ctx.set_gpr(31, 0x08B73E14u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    ctx.pc = 0x08AF2C6Cu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E14u) goto L_08B73E14;
    return;
L_08B73E14:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E18;
L_08B73E18:
    ctx.set_gpr(5, 2223u << 16u);
    goto L_08B73E1C;
L_08B73E1C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73E20;
L_08B73E20:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12920));
    goto L_08B73E24;
L_08B73E24:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(11848));
    goto L_08B73E28;
L_08B73E28:
    ctx.set_gpr(31, 0x08B73E30u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(12908));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E30u) goto L_08B73E30;
    return;
L_08B73E30:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E34;
L_08B73E34:
    ctx.set_gpr(31, 0x08B73E3Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    ctx.pc = 0x08B01FDCu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E3Cu) goto L_08B73E3C;
    return;
L_08B73E3C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E40;
L_08B73E40:
    ctx.set_gpr(5, 2224u << 16u);
    goto L_08B73E44;
L_08B73E44:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73E48;
L_08B73E48:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14364));
    goto L_08B73E4C;
L_08B73E4C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8324));
    goto L_08B73E50;
L_08B73E50:
    ctx.set_gpr(31, 0x08B73E58u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14352));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E58u) goto L_08B73E58;
    return;
L_08B73E58:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E5C;
L_08B73E5C:
    ctx.set_gpr(31, 0x08B73E64u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    ctx.pc = 0x08ACE820u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E64u) goto L_08B73E64;
    return;
L_08B73E64:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E68;
L_08B73E68:
    ctx.set_gpr(5, 2221u << 16u);
    goto L_08B73E6C;
L_08B73E6C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73E70;
L_08B73E70:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14576));
    goto L_08B73E74;
L_08B73E74:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6028));
    goto L_08B73E78;
L_08B73E78:
    ctx.set_gpr(31, 0x08B73E80u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14564));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E80u) goto L_08B73E80;
    return;
L_08B73E80:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E84;
L_08B73E84:
    ctx.set_gpr(31, 0x08B73E8Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    ctx.pc = 0x08AD47D0u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73E8Cu) goto L_08B73E8C;
    return;
L_08B73E8C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73E90;
L_08B73E90:
    ctx.set_gpr(5, 2221u << 16u);
    goto L_08B73E94;
L_08B73E94:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73E98;
L_08B73E98:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14628));
    goto L_08B73E9C;
L_08B73E9C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18476));
    goto L_08B73EA0;
L_08B73EA0:
    ctx.set_gpr(31, 0x08B73EA8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14616));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73EA8u) goto L_08B73EA8;
    return;
L_08B73EA8:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73EAC;
L_08B73EAC:
    ctx.set_gpr(31, 0x08B73EB4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14712));
    ctx.pc = 0x0885B834u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73EB4u) goto L_08B73EB4;
    return;
L_08B73EB4:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73EB8;
L_08B73EB8:
    ctx.set_gpr(5, 2182u << 16u);
    goto L_08B73EBC;
L_08B73EBC:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73EC0;
L_08B73EC0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14712));
    goto L_08B73EC4;
L_08B73EC4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-17636));
    goto L_08B73EC8;
L_08B73EC8:
    ctx.set_gpr(31, 0x08B73ED0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(14700));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73ED0u) goto L_08B73ED0;
    return;
L_08B73ED0:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73ED4;
L_08B73ED4:
    ctx.set_gpr(31, 0x08B73EDCu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15764));
    ctx.pc = 0x08AC5D48u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73EDCu) goto L_08B73EDC;
    return;
L_08B73EDC:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73EE0;
L_08B73EE0:
    ctx.set_gpr(5, 2220u << 16u);
    goto L_08B73EE4;
L_08B73EE4:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73EE8;
L_08B73EE8:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15764));
    goto L_08B73EEC;
L_08B73EEC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(23960));
    goto L_08B73EF0;
L_08B73EF0:
    ctx.set_gpr(31, 0x08B73EF8u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(15752));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73EF8u) goto L_08B73EF8;
    return;
L_08B73EF8:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73EFC;
L_08B73EFC:
    ctx.set_gpr(31, 0x08B73F04u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20836));
    ctx.pc = 0x08AC8BACu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F04u) goto L_08B73F04;
    return;
L_08B73F04:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F08;
L_08B73F08:
    ctx.set_gpr(5, 2221u << 16u);
    goto L_08B73F0C;
L_08B73F0C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73F10;
L_08B73F10:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20836));
    goto L_08B73F14;
L_08B73F14:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29636));
    goto L_08B73F18;
L_08B73F18:
    ctx.set_gpr(31, 0x08B73F20u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20824));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F20u) goto L_08B73F20;
    return;
L_08B73F20:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F24;
L_08B73F24:
    ctx.set_gpr(31, 0x08B73F2Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21440));
    ctx.pc = 0x08AC7EA4u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F2Cu) goto L_08B73F2C;
    return;
L_08B73F2C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F30;
L_08B73F30:
    ctx.set_gpr(5, 2220u << 16u);
    goto L_08B73F34;
L_08B73F34:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73F38;
L_08B73F38:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21440));
    goto L_08B73F3C;
L_08B73F3C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32480));
    goto L_08B73F40;
L_08B73F40:
    ctx.set_gpr(31, 0x08B73F48u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21428));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F48u) goto L_08B73F48;
    return;
L_08B73F48:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F4C;
L_08B73F4C:
    ctx.set_gpr(31, 0x08B73F54u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21604));
    ctx.pc = 0x08ACE654u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F54u) goto L_08B73F54;
    return;
L_08B73F54:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F58;
L_08B73F58:
    ctx.set_gpr(5, 2221u << 16u);
    goto L_08B73F5C;
L_08B73F5C:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73F60;
L_08B73F60:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21604));
    goto L_08B73F64;
L_08B73F64:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-6512));
    goto L_08B73F68;
L_08B73F68:
    ctx.set_gpr(31, 0x08B73F70u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21592));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F70u) goto L_08B73F70;
    return;
L_08B73F70:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F74;
L_08B73F74:
    ctx.set_gpr(31, 0x08B73F7Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21780));
    ctx.pc = 0x08848D00u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F7Cu) goto L_08B73F7C;
    return;
L_08B73F7C:
    ctx.set_gpr(4, 2244u << 16u);
    goto L_08B73F80;
L_08B73F80:
    ctx.set_gpr(5, 2181u << 16u);
    goto L_08B73F84;
L_08B73F84:
    ctx.set_gpr(6, 2244u << 16u);
    goto L_08B73F88;
L_08B73F88:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(21780));
    goto L_08B73F8C;
L_08B73F8C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-29504));
    goto L_08B73F90;
L_08B73F90:
    ctx.set_gpr(31, 0x08B73F98u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21768));
    ctx.pc = 0x08805334u;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B73F98u) goto L_08B73F98;
    return;
L_08B73F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08B73F9C;
L_08B73F9C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void diva_static_initializers(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    diva_static_initializers_entry(rt, ctx, 0u, aot_mem);
}

static void import_0(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(0u, "InterruptManager", 0xCA04A2B9u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_1(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(1u, "InterruptManager", 0xD61E6961u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_2(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(2u, "InterruptManager", 0xFB8E22ECu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_3(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(3u, "IoFileMgrForUser", 0x42EC03ACu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_4(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(4u, "IoFileMgrForUser", 0x54F5FB11u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_5(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(5u, "IoFileMgrForUser", 0x55F4717Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_6(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(6u, "IoFileMgrForUser", 0x6A638D83u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_7(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(7u, "IoFileMgrForUser", 0x71B19E77u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_8(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(8u, "IoFileMgrForUser", 0x779103A0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_9(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(9u, "IoFileMgrForUser", 0x810C4BC3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_10(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(10u, "IoFileMgrForUser", 0xA0B5A7C2u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_11(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(11u, "IoFileMgrForUser", 0xACE946E8u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_12(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(12u, "IoFileMgrForUser", 0xB293727Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_13(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(13u, "IoFileMgrForUser", 0xB29DDF9Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_14(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(14u, "IoFileMgrForUser", 0xE23EEC33u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_15(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(15u, "IoFileMgrForUser", 0xE3EB004Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_16(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(16u, "IoFileMgrForUser", 0xEB092469u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_17(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(17u, "IoFileMgrForUser", 0x109F50BCu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_18(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(18u, "IoFileMgrForUser", 0x27EB27B8u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_19(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(19u, "IoFileMgrForUser", 0x3251EA56u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_20(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(20u, "IoFileMgrForUser", 0x35DBD746u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_21(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(21u, "Kernel_Library", 0x092968F4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_22(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(22u, "Kernel_Library", 0x15B6446Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_23(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(23u, "Kernel_Library", 0x1FC64E09u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_24(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(24u, "Kernel_Library", 0x5F10D406u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_25(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(25u, "LoadExecForUser", 0x05572A5Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_26(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(26u, "LoadExecForUser", 0x4AC57943u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_27(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(27u, "ModuleMgrForUser", 0x2E0911AAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_28(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(28u, "ModuleMgrForUser", 0xD8B73127u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_29(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(29u, "ModuleMgrForUser", 0xF0A26395u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_30(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(30u, "ModuleMgrForUser", 0x8F2DF740u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_31(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(31u, "ModuleMgrForUser", 0xD1FF982Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_32(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(32u, "StdioForUser", 0x172D316Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_33(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(33u, "StdioForUser", 0xA6BAB2E9u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_34(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(34u, "StdioForUser", 0xF78BA90Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_35(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(35u, "SysMemUserForUser", 0x13A5ABEFu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_36(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(36u, "SysMemUserForUser", 0x237DBD4Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_37(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(37u, "SysMemUserForUser", 0x91DE343Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_38(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(38u, "SysMemUserForUser", 0x9D9A5BA1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_39(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(39u, "SysMemUserForUser", 0xB6D61D02u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_40(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(40u, "SysMemUserForUser", 0xF77D77CBu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_41(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(41u, "ThreadManForUser", 0xCEADEB47u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_42(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(42u, "ThreadManForUser", 0xD59EAD2Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_43(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(43u, "ThreadManForUser", 0xD6DA4BA1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_44(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(44u, "ThreadManForUser", 0x1FB15A32u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_45(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(45u, "ThreadManForUser", 0xE81CAF8Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_46(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(46u, "ThreadManForUser", 0xE9B3061Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_47(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(47u, "ThreadManForUser", 0xEA748E31u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_48(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(48u, "ThreadManForUser", 0xEDBA5844u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_49(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(49u, "ThreadManForUser", 0xEF9E4C70u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_50(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(50u, "ThreadManForUser", 0xF475845Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_51(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(51u, "ThreadManForUser", 0xF8170FBEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_52(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(52u, "ThreadManForUser", 0x278C0DF5u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_53(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(53u, "ThreadManForUser", 0x28B6489Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_54(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(54u, "ThreadManForUser", 0x293B45B8u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_55(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(55u, "ThreadManForUser", 0x30FD48F0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_56(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(56u, "ThreadManForUser", 0x328C546Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_57(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(57u, "ThreadManForUser", 0x349D6D6Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_58(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(58u, "ThreadManForUser", 0x369ED59Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_59(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(59u, "ThreadManForUser", 0x383F7BCCu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_60(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(60u, "ThreadManForUser", 0x0D81716Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_61(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(61u, "ThreadManForUser", 0x3F53E640u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_62(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(62u, "ThreadManForUser", 0x402FCF22u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_63(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(63u, "ThreadManForUser", 0x446D8DE6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_64(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(64u, "ThreadManForUser", 0x4E3A1105u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_65(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(65u, "ThreadManForUser", 0x55C20A00u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_66(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(66u, "ThreadManForUser", 0x58B1F937u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_67(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(67u, "ThreadManForUser", 0x60107536u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_68(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(68u, "ThreadManForUser", 0x616403BAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_69(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(69u, "ThreadManForUser", 0x68DA9E36u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_70(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(70u, "ThreadManForUser", 0x6B30100Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_71(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(71u, "ThreadManForUser", 0x71BC9871u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_72(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(72u, "ThreadManForUser", 0x75156E8Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_73(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(73u, "ThreadManForUser", 0x809CE29Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_74(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(74u, "ThreadManForUser", 0x812346E4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_75(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(75u, "ThreadManForUser", 0x8125221Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_76(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(76u, "ThreadManForUser", 0x82BC5777u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_77(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(77u, "ThreadManForUser", 0x17C1684Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_78(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(78u, "ThreadManForUser", 0x86255ADAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_79(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(79u, "ThreadManForUser", 0x94AA61EEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_80(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(80u, "ThreadManForUser", 0x9944F31Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_81(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(81u, "ThreadManForUser", 0x9FA03CD3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_82(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(82u, "ThreadManForUser", 0xA66B0120u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_83(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(83u, "ThreadManForUser", 0xAA73C935u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_84(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(84u, "ThreadManForUser", 0xB011B11Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_85(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(85u, "ThreadManForUser", 0x19CFF145u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_86(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(86u, "ThreadManForUser", 0xB7D098C6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_87(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(87u, "ThreadManForUser", 0xBC6FEBC5u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_88(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(88u, "UtilsForUser", 0x71EC4271u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_89(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(89u, "UtilsForUser", 0x79D1C3FAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_90(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(90u, "UtilsForUser", 0x91E4F6A7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_91(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(91u, "UtilsForUser", 0x27CC57F0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_92(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(92u, "UtilsForUser", 0x3EE30821u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_93(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(93u, "sceSuspendForUser", 0x090CCB3Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_94(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(94u, "sceSuspendForUser", 0x3E0271D3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_95(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(95u, "sceSuspendForUser", 0xA569E425u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_96(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(96u, "sceGe_user", 0x05DB22CEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_97(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(97u, "sceGe_user", 0x1F6752ADu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_98(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(98u, "sceGe_user", 0xA4FC06A4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_99(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(99u, "sceGe_user", 0xAB49E76Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_100(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(100u, "sceGe_user", 0xB287BD61u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_101(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(101u, "sceGe_user", 0xE47E40E4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_102(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(102u, "sceDisplay", 0x0E20F177u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_103(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(103u, "sceDisplay", 0x289D82FEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_104(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(104u, "sceDisplay", 0x46F186C3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_105(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(105u, "sceDisplay", 0x984C27E7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_106(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(106u, "sceDisplay", 0x9C6EAAD7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_107(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(107u, "sceCtrl", 0x1F4011E6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_108(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(108u, "sceCtrl", 0x3A622550u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_109(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(109u, "scePower", 0x04B7766Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_110(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(110u, "scePower", 0xDFA8BAF8u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_111(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(111u, "scePower", 0xEBD177D6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_112(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(112u, "sceUmdUser", 0x46EBB729u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_113(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(113u, "sceUmdUser", 0x56202973u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_114(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(114u, "sceUmdUser", 0x6AF9B50Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_115(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(115u, "sceUmdUser", 0x6B4A146Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_116(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(116u, "sceUmdUser", 0x8EF08FCEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_117(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(117u, "sceUmdUser", 0xAEE7404Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_118(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(118u, "sceUmdUser", 0xC6183D47u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_119(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(119u, "sceAudio", 0x01562BA3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_120(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(120u, "sceAudio", 0x136CAF51u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_121(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(121u, "sceAudio", 0x13F592BCu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_122(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(122u, "sceAudio", 0x2D53F36Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_123(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(123u, "sceAudio", 0x43196845u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_124(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(124u, "sceAudio", 0x5EC81C55u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_125(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(125u, "sceAudio", 0x6FC46853u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_126(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(126u, "sceAudio", 0x95FD0C2Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_127(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(127u, "sceAudio", 0xB011922Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_128(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(128u, "sceAudio", 0xCB2E439Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_129(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(129u, "sceUtility", 0x0251B134u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_130(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(130u, "sceUtility", 0x2A2B3DE0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_131(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(131u, "sceUtility", 0x2AD8E239u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_132(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(132u, "sceUtility", 0x34B78343u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_133(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(133u, "sceUtility", 0x3DFAEBA9u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_134(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(134u, "sceUtility", 0x4B85C861u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_135(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(135u, "sceUtility", 0x4DB1E739u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_136(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(136u, "sceUtility", 0x50C4CD57u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_137(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(137u, "sceUtility", 0x6332AA39u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_138(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(138u, "sceUtility", 0x67AF3428u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_139(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(139u, "sceUtility", 0x8874DBE0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_140(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(140u, "sceUtility", 0x91E70E35u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_141(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(141u, "sceUtility", 0x95FC253Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_142(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(142u, "sceUtility", 0x9790B33Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_143(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(143u, "sceUtility", 0x9A1C91D7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_144(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(144u, "sceUtility", 0xA5DA2406u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_145(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(145u, "sceUtility", 0xAB083EA9u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_146(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(146u, "sceUtility", 0xD4B95FFBu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_147(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(147u, "sceUtility", 0xD81957B7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_148(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(148u, "sceUtility", 0xE49BFE92u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_149(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(149u, "sceUtility", 0xF3F76017u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_150(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(150u, "sceUtility", 0xF6269B82u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_151(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(151u, "sceUtility", 0xF88155F6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_152(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(152u, "sceUtility", 0xF9E0008Cu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_153(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(153u, "sceRtc", 0x011F03C1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_154(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(154u, "sceRtc", 0xE1C93E47u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_155(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(155u, "sceRtc", 0xE7C27D1Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_156(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(156u, "sceMp3", 0x07EC321Au, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_157(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(157u, "sceMp3", 0x0DB149F4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_158(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(158u, "sceMp3", 0x2A368661u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_159(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(159u, "sceMp3", 0x354D27EAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_160(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(160u, "sceMp3", 0x35750070u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_161(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(161u, "sceMp3", 0x3C2FA058u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_162(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(162u, "sceMp3", 0x3CEF484Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_163(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(163u, "sceMp3", 0x44E07129u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_164(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(164u, "sceMp3", 0x7F696782u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_165(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(165u, "sceMp3", 0x87677E40u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_166(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(166u, "sceMp3", 0x87C263D1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_167(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(167u, "sceMp3", 0x8F450998u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_168(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(168u, "sceMp3", 0xA703FE0Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_169(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(169u, "sceMp3", 0xD021C0FBu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_170(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(170u, "sceMp3", 0xD0A56296u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_171(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(171u, "sceMp3", 0xF5478233u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_172(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(172u, "sceVaudio", 0x03B6807Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_173(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(173u, "sceVaudio", 0x67585DFDu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_174(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(174u, "sceVaudio", 0x8986295Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_175(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(175u, "sceNetAdhoc", 0xA62C6F57u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_176(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(176u, "sceNetAdhoc", 0xE1D621D7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_177(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(177u, "sceNetAdhocctl", 0x08FFF7A0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_178(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(178u, "sceNetAdhocctl", 0x20B317A0u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_179(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(179u, "sceNetAdhocctl", 0x34401D65u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_180(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(180u, "sceNetAdhocctl", 0x6402490Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_181(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(181u, "sceNetAdhocctl", 0x75ECD386u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_182(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(182u, "sceNetAdhocctl", 0x81AEE1BEu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_183(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(183u, "sceNetAdhocctl", 0x9D689E13u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_184(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(184u, "sceNetAdhocctl", 0xDED9D28Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_185(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(185u, "sceNetAdhocctl", 0xE162CB14u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_186(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(186u, "sceNetAdhocctl", 0xE26F226Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_187(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(187u, "sceNetAdhocMatching", 0x2A2A1E07u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_188(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(188u, "sceNetAdhocMatching", 0x32B156B3u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_189(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(189u, "sceNetAdhocMatching", 0x5E3D4B79u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_190(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(190u, "sceNetAdhocMatching", 0x7945ECDAu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_191(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(191u, "sceNetAdhocMatching", 0x8F58BEDFu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_192(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(192u, "sceNetAdhocMatching", 0x93EF3843u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_193(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(193u, "sceNetAdhocMatching", 0xCA5EDA6Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_194(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(194u, "sceNetAdhocMatching", 0xF16EAF4Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_195(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(195u, "sceNetAdhocMatching", 0xF79472D7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_196(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(196u, "sceWlanDrv", 0x0C622081u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_197(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(197u, "sceNet", 0x281928A9u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_198(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(198u, "sceNet", 0x39AF39A6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_199(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(199u, "sceNet", 0x89360950u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_200(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(200u, "sceMpeg", 0x0E3C2E9Du, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_201(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(201u, "sceMpeg", 0x0F6C18D7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_202(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(202u, "sceMpeg", 0x13407F13u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_203(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(203u, "sceMpeg", 0x167AFD9Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_204(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(204u, "sceMpeg", 0x21FF80E4u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_205(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(205u, "sceMpeg", 0x37295ED8u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_206(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(206u, "sceMpeg", 0x42560F23u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_207(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(207u, "sceMpeg", 0x4571CC64u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_208(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(208u, "sceMpeg", 0x591A4AA2u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_209(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(209u, "sceMpeg", 0x606A4649u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_210(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(210u, "sceMpeg", 0x611E9E11u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_211(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(211u, "sceMpeg", 0x682A619Bu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_212(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(212u, "sceMpeg", 0x707B7629u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_213(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(213u, "sceMpeg", 0x740FCCD1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_214(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(214u, "sceMpeg", 0x800C44DFu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_215(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(215u, "sceMpeg", 0x874624D6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_216(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(216u, "sceMpeg", 0xA780CF7Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_217(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(217u, "sceMpeg", 0xB240A59Eu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_218(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(218u, "sceMpeg", 0xB5F6DC87u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_219(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(219u, "sceMpeg", 0xC132E22Fu, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_220(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(220u, "sceMpeg", 0xCEB870B1u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_221(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(221u, "sceMpeg", 0xD7A29F46u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_222(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(222u, "sceMpeg", 0xD8C5F121u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_223(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(223u, "sceMpeg", 0xE1CE83A7u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_224(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(224u, "sceMpeg", 0xF8DCB679u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_225(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(225u, "sceMpeg", 0xFE246728u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_226(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(226u, "sceDmac", 0x617F3FE6u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

static void import_227(Runtime &rt, AllegrexContext &ctx) {
    const RuntimeExecutionContextToken caller_context = capture_runtime_execution_context();
    const std::uint32_t import_pc = ctx.pc;
    const std::uint32_t return_address = ctx.gpr[31];
    rt.invoke_import_cached(227u, "sceImpose", 0x36AA6E91u, ctx);
    if (!rt.stopped() && runtime_execution_context_matches(caller_context) &&
        ctx.pc == import_pc) ctx.pc = return_address;
}

void register_diva_supplemental_functions(Runtime &runtime) {
    runtime.register_function(0x08B73BA8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BACu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BB0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BB4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BBCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BC0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BC4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BC8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BCCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BD0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BD8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BDCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BE4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BE8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BECu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BF0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BF4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73BF8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C00u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C04u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C0Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C10u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C14u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C18u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C1Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C20u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C28u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C2Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C34u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C38u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C3Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C40u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C44u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C48u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C50u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C54u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C5Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C60u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C64u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C68u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C6Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C70u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C78u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C7Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C84u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C88u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C8Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C90u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C94u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73C98u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CA0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CA4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CACu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CB0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CB4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CB8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CBCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CC0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CC8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CCCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CD4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CD8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CDCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CE0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CE4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CE8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CF0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CF4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73CFCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D00u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D04u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D08u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D0Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D10u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D18u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D1Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D24u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D28u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D2Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D30u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D34u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D38u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D40u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D44u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D4Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D50u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D54u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D58u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D5Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D60u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D68u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D6Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D74u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D78u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D7Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D80u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D84u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D88u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D90u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D94u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73D9Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DA0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DA4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DA8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DACu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DB0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DB8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DBCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DC4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DC8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DCCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DD0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DD4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DD8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DE0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DE4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DECu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DF0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DF4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DF8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73DFCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E00u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E08u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E0Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E14u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E18u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E1Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E20u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E24u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E28u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E30u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E34u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E3Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E40u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E44u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E48u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E4Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E50u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E58u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E5Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E64u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E68u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E6Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E70u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E74u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E78u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E80u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E84u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E8Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E90u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E94u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E98u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73E9Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EA0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EA8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EACu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EB4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EB8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EBCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EC0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EC4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EC8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73ED0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73ED4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EDCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EE0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EE4u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EE8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EECu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EF0u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EF8u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73EFCu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F04u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F08u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F0Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F10u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F14u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F18u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F20u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F24u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F2Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F30u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F34u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F38u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F3Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F40u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F48u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F4Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F54u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F58u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F5Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F60u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F64u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F68u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F70u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F74u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F7Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F80u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F84u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F88u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F8Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F90u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F98u, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B73F9Cu, &diva_static_initializers, "diva_static_initializers");
    runtime.register_function(0x08B0DBECu, &import_0, "InterruptManager::0xCA04A2B9");
    runtime.register_function(0x08B0DBF4u, &import_1, "InterruptManager::0xD61E6961");
    runtime.register_function(0x08B0DBFCu, &import_2, "InterruptManager::0xFB8E22EC");
    runtime.register_function(0x08B0DC04u, &import_3, "IoFileMgrForUser::0x42EC03AC");
    runtime.register_function(0x08B0DC0Cu, &import_4, "IoFileMgrForUser::0x54F5FB11");
    runtime.register_function(0x08B0DC14u, &import_5, "IoFileMgrForUser::0x55F4717D");
    runtime.register_function(0x08B0DC1Cu, &import_6, "IoFileMgrForUser::0x6A638D83");
    runtime.register_function(0x08B0DC24u, &import_7, "IoFileMgrForUser::0x71B19E77");
    runtime.register_function(0x08B0DC2Cu, &import_8, "IoFileMgrForUser::0x779103A0");
    runtime.register_function(0x08B0DC34u, &import_9, "IoFileMgrForUser::0x810C4BC3");
    runtime.register_function(0x08B0DC3Cu, &import_10, "IoFileMgrForUser::0xA0B5A7C2");
    runtime.register_function(0x08B0DC44u, &import_11, "IoFileMgrForUser::0xACE946E8");
    runtime.register_function(0x08B0DC4Cu, &import_12, "IoFileMgrForUser::0xB293727F");
    runtime.register_function(0x08B0DC54u, &import_13, "IoFileMgrForUser::0xB29DDF9C");
    runtime.register_function(0x08B0DC5Cu, &import_14, "IoFileMgrForUser::0xE23EEC33");
    runtime.register_function(0x08B0DC64u, &import_15, "IoFileMgrForUser::0xE3EB004C");
    runtime.register_function(0x08B0DC6Cu, &import_16, "IoFileMgrForUser::0xEB092469");
    runtime.register_function(0x08B0DC74u, &import_17, "IoFileMgrForUser::0x109F50BC");
    runtime.register_function(0x08B0DC7Cu, &import_18, "IoFileMgrForUser::0x27EB27B8");
    runtime.register_function(0x08B0DC84u, &import_19, "IoFileMgrForUser::0x3251EA56");
    runtime.register_function(0x08B0DC8Cu, &import_20, "IoFileMgrForUser::0x35DBD746");
    runtime.register_function(0x08B0DC94u, &import_21, "Kernel_Library::0x092968F4");
    runtime.register_function(0x08B0DC9Cu, &import_22, "Kernel_Library::0x15B6446B");
    runtime.register_function(0x08B0DCA4u, &import_23, "Kernel_Library::0x1FC64E09");
    runtime.register_function(0x08B0DCACu, &import_24, "Kernel_Library::0x5F10D406");
    runtime.register_function(0x08B0DCB4u, &import_25, "LoadExecForUser::0x05572A5F");
    runtime.register_function(0x08B0DCBCu, &import_26, "LoadExecForUser::0x4AC57943");
    runtime.register_function(0x08B0DCC4u, &import_27, "ModuleMgrForUser::0x2E0911AA");
    runtime.register_function(0x08B0DCCCu, &import_28, "ModuleMgrForUser::0xD8B73127");
    runtime.register_function(0x08B0DCD4u, &import_29, "ModuleMgrForUser::0xF0A26395");
    runtime.register_function(0x08B0DCDCu, &import_30, "ModuleMgrForUser::0x8F2DF740");
    runtime.register_function(0x08B0DCE4u, &import_31, "ModuleMgrForUser::0xD1FF982A");
    runtime.register_function(0x08B0DCECu, &import_32, "StdioForUser::0x172D316E");
    runtime.register_function(0x08B0DCF4u, &import_33, "StdioForUser::0xA6BAB2E9");
    runtime.register_function(0x08B0DCFCu, &import_34, "StdioForUser::0xF78BA90A");
    runtime.register_function(0x08B0DD04u, &import_35, "SysMemUserForUser::0x13A5ABEF");
    runtime.register_function(0x08B0DD0Cu, &import_36, "SysMemUserForUser::0x237DBD4F");
    runtime.register_function(0x08B0DD14u, &import_37, "SysMemUserForUser::0x91DE343C");
    runtime.register_function(0x08B0DD1Cu, &import_38, "SysMemUserForUser::0x9D9A5BA1");
    runtime.register_function(0x08B0DD24u, &import_39, "SysMemUserForUser::0xB6D61D02");
    runtime.register_function(0x08B0DD2Cu, &import_40, "SysMemUserForUser::0xF77D77CB");
    runtime.register_function(0x08B0DD34u, &import_41, "ThreadManForUser::0xCEADEB47");
    runtime.register_function(0x08B0DD3Cu, &import_42, "ThreadManForUser::0xD59EAD2F");
    runtime.register_function(0x08B0DD44u, &import_43, "ThreadManForUser::0xD6DA4BA1");
    runtime.register_function(0x08B0DD4Cu, &import_44, "ThreadManForUser::0x1FB15A32");
    runtime.register_function(0x08B0DD54u, &import_45, "ThreadManForUser::0xE81CAF8F");
    runtime.register_function(0x08B0DD5Cu, &import_46, "ThreadManForUser::0xE9B3061E");
    runtime.register_function(0x08B0DD64u, &import_47, "ThreadManForUser::0xEA748E31");
    runtime.register_function(0x08B0DD6Cu, &import_48, "ThreadManForUser::0xEDBA5844");
    runtime.register_function(0x08B0DD74u, &import_49, "ThreadManForUser::0xEF9E4C70");
    runtime.register_function(0x08B0DD7Cu, &import_50, "ThreadManForUser::0xF475845D");
    runtime.register_function(0x08B0DD84u, &import_51, "ThreadManForUser::0xF8170FBE");
    runtime.register_function(0x08B0DD8Cu, &import_52, "ThreadManForUser::0x278C0DF5");
    runtime.register_function(0x08B0DD94u, &import_53, "ThreadManForUser::0x28B6489C");
    runtime.register_function(0x08B0DD9Cu, &import_54, "ThreadManForUser::0x293B45B8");
    runtime.register_function(0x08B0DDA4u, &import_55, "ThreadManForUser::0x30FD48F0");
    runtime.register_function(0x08B0DDACu, &import_56, "ThreadManForUser::0x328C546A");
    runtime.register_function(0x08B0DDB4u, &import_57, "ThreadManForUser::0x349D6D6C");
    runtime.register_function(0x08B0DDBCu, &import_58, "ThreadManForUser::0x369ED59D");
    runtime.register_function(0x08B0DDC4u, &import_59, "ThreadManForUser::0x383F7BCC");
    runtime.register_function(0x08B0DDCCu, &import_60, "ThreadManForUser::0x0D81716A");
    runtime.register_function(0x08B0DDD4u, &import_61, "ThreadManForUser::0x3F53E640");
    runtime.register_function(0x08B0DDDCu, &import_62, "ThreadManForUser::0x402FCF22");
    runtime.register_function(0x08B0DDE4u, &import_63, "ThreadManForUser::0x446D8DE6");
    runtime.register_function(0x08B0DDECu, &import_64, "ThreadManForUser::0x4E3A1105");
    runtime.register_function(0x08B0DDF4u, &import_65, "ThreadManForUser::0x55C20A00");
    runtime.register_function(0x08B0DDFCu, &import_66, "ThreadManForUser::0x58B1F937");
    runtime.register_function(0x08B0DE04u, &import_67, "ThreadManForUser::0x60107536");
    runtime.register_function(0x08B0DE0Cu, &import_68, "ThreadManForUser::0x616403BA");
    runtime.register_function(0x08B0DE14u, &import_69, "ThreadManForUser::0x68DA9E36");
    runtime.register_function(0x08B0DE1Cu, &import_70, "ThreadManForUser::0x6B30100F");
    runtime.register_function(0x08B0DE24u, &import_71, "ThreadManForUser::0x71BC9871");
    runtime.register_function(0x08B0DE2Cu, &import_72, "ThreadManForUser::0x75156E8F");
    runtime.register_function(0x08B0DE34u, &import_73, "ThreadManForUser::0x809CE29B");
    runtime.register_function(0x08B0DE3Cu, &import_74, "ThreadManForUser::0x812346E4");
    runtime.register_function(0x08B0DE44u, &import_75, "ThreadManForUser::0x8125221D");
    runtime.register_function(0x08B0DE4Cu, &import_76, "ThreadManForUser::0x82BC5777");
    runtime.register_function(0x08B0DE54u, &import_77, "ThreadManForUser::0x17C1684E");
    runtime.register_function(0x08B0DE5Cu, &import_78, "ThreadManForUser::0x86255ADA");
    runtime.register_function(0x08B0DE64u, &import_79, "ThreadManForUser::0x94AA61EE");
    runtime.register_function(0x08B0DE6Cu, &import_80, "ThreadManForUser::0x9944F31F");
    runtime.register_function(0x08B0DE74u, &import_81, "ThreadManForUser::0x9FA03CD3");
    runtime.register_function(0x08B0DE7Cu, &import_82, "ThreadManForUser::0xA66B0120");
    runtime.register_function(0x08B0DE84u, &import_83, "ThreadManForUser::0xAA73C935");
    runtime.register_function(0x08B0DE8Cu, &import_84, "ThreadManForUser::0xB011B11F");
    runtime.register_function(0x08B0DE94u, &import_85, "ThreadManForUser::0x19CFF145");
    runtime.register_function(0x08B0DE9Cu, &import_86, "ThreadManForUser::0xB7D098C6");
    runtime.register_function(0x08B0DEA4u, &import_87, "ThreadManForUser::0xBC6FEBC5");
    runtime.register_function(0x08B0DEACu, &import_88, "UtilsForUser::0x71EC4271");
    runtime.register_function(0x08B0DEB4u, &import_89, "UtilsForUser::0x79D1C3FA");
    runtime.register_function(0x08B0DEBCu, &import_90, "UtilsForUser::0x91E4F6A7");
    runtime.register_function(0x08B0DEC4u, &import_91, "UtilsForUser::0x27CC57F0");
    runtime.register_function(0x08B0DECCu, &import_92, "UtilsForUser::0x3EE30821");
    runtime.register_function(0x08B0DED4u, &import_93, "sceSuspendForUser::0x090CCB3F");
    runtime.register_function(0x08B0DEDCu, &import_94, "sceSuspendForUser::0x3E0271D3");
    runtime.register_function(0x08B0DEE4u, &import_95, "sceSuspendForUser::0xA569E425");
    runtime.register_function(0x08B0DEECu, &import_96, "sceGe_user::0x05DB22CE");
    runtime.register_function(0x08B0DEF4u, &import_97, "sceGe_user::0x1F6752AD");
    runtime.register_function(0x08B0DEFCu, &import_98, "sceGe_user::0xA4FC06A4");
    runtime.register_function(0x08B0DF04u, &import_99, "sceGe_user::0xAB49E76A");
    runtime.register_function(0x08B0DF0Cu, &import_100, "sceGe_user::0xB287BD61");
    runtime.register_function(0x08B0DF14u, &import_101, "sceGe_user::0xE47E40E4");
    runtime.register_function(0x08B0DF1Cu, &import_102, "sceDisplay::0x0E20F177");
    runtime.register_function(0x08B0DF24u, &import_103, "sceDisplay::0x289D82FE");
    runtime.register_function(0x08B0DF2Cu, &import_104, "sceDisplay::0x46F186C3");
    runtime.register_function(0x08B0DF34u, &import_105, "sceDisplay::0x984C27E7");
    runtime.register_function(0x08B0DF3Cu, &import_106, "sceDisplay::0x9C6EAAD7");
    runtime.register_function(0x08B0DF44u, &import_107, "sceCtrl::0x1F4011E6");
    runtime.register_function(0x08B0DF4Cu, &import_108, "sceCtrl::0x3A622550");
    runtime.register_function(0x08B0DF54u, &import_109, "scePower::0x04B7766E");
    runtime.register_function(0x08B0DF5Cu, &import_110, "scePower::0xDFA8BAF8");
    runtime.register_function(0x08B0DF64u, &import_111, "scePower::0xEBD177D6");
    runtime.register_function(0x08B0DF6Cu, &import_112, "sceUmdUser::0x46EBB729");
    runtime.register_function(0x08B0DF74u, &import_113, "sceUmdUser::0x56202973");
    runtime.register_function(0x08B0DF7Cu, &import_114, "sceUmdUser::0x6AF9B50A");
    runtime.register_function(0x08B0DF84u, &import_115, "sceUmdUser::0x6B4A146C");
    runtime.register_function(0x08B0DF8Cu, &import_116, "sceUmdUser::0x8EF08FCE");
    runtime.register_function(0x08B0DF94u, &import_117, "sceUmdUser::0xAEE7404D");
    runtime.register_function(0x08B0DF9Cu, &import_118, "sceUmdUser::0xC6183D47");
    runtime.register_function(0x08B0DFA4u, &import_119, "sceAudio::0x01562BA3");
    runtime.register_function(0x08B0DFACu, &import_120, "sceAudio::0x136CAF51");
    runtime.register_function(0x08B0DFB4u, &import_121, "sceAudio::0x13F592BC");
    runtime.register_function(0x08B0DFBCu, &import_122, "sceAudio::0x2D53F36E");
    runtime.register_function(0x08B0DFC4u, &import_123, "sceAudio::0x43196845");
    runtime.register_function(0x08B0DFCCu, &import_124, "sceAudio::0x5EC81C55");
    runtime.register_function(0x08B0DFD4u, &import_125, "sceAudio::0x6FC46853");
    runtime.register_function(0x08B0DFDCu, &import_126, "sceAudio::0x95FD0C2D");
    runtime.register_function(0x08B0DFE4u, &import_127, "sceAudio::0xB011922F");
    runtime.register_function(0x08B0DFECu, &import_128, "sceAudio::0xCB2E439E");
    runtime.register_function(0x08B0DFF4u, &import_129, "sceUtility::0x0251B134");
    runtime.register_function(0x08B0DFFCu, &import_130, "sceUtility::0x2A2B3DE0");
    runtime.register_function(0x08B0E004u, &import_131, "sceUtility::0x2AD8E239");
    runtime.register_function(0x08B0E00Cu, &import_132, "sceUtility::0x34B78343");
    runtime.register_function(0x08B0E014u, &import_133, "sceUtility::0x3DFAEBA9");
    runtime.register_function(0x08B0E01Cu, &import_134, "sceUtility::0x4B85C861");
    runtime.register_function(0x08B0E024u, &import_135, "sceUtility::0x4DB1E739");
    runtime.register_function(0x08B0E02Cu, &import_136, "sceUtility::0x50C4CD57");
    runtime.register_function(0x08B0E034u, &import_137, "sceUtility::0x6332AA39");
    runtime.register_function(0x08B0E03Cu, &import_138, "sceUtility::0x67AF3428");
    runtime.register_function(0x08B0E044u, &import_139, "sceUtility::0x8874DBE0");
    runtime.register_function(0x08B0E04Cu, &import_140, "sceUtility::0x91E70E35");
    runtime.register_function(0x08B0E054u, &import_141, "sceUtility::0x95FC253B");
    runtime.register_function(0x08B0E05Cu, &import_142, "sceUtility::0x9790B33C");
    runtime.register_function(0x08B0E064u, &import_143, "sceUtility::0x9A1C91D7");
    runtime.register_function(0x08B0E06Cu, &import_144, "sceUtility::0xA5DA2406");
    runtime.register_function(0x08B0E074u, &import_145, "sceUtility::0xAB083EA9");
    runtime.register_function(0x08B0E07Cu, &import_146, "sceUtility::0xD4B95FFB");
    runtime.register_function(0x08B0E084u, &import_147, "sceUtility::0xD81957B7");
    runtime.register_function(0x08B0E08Cu, &import_148, "sceUtility::0xE49BFE92");
    runtime.register_function(0x08B0E094u, &import_149, "sceUtility::0xF3F76017");
    runtime.register_function(0x08B0E09Cu, &import_150, "sceUtility::0xF6269B82");
    runtime.register_function(0x08B0E0A4u, &import_151, "sceUtility::0xF88155F6");
    runtime.register_function(0x08B0E0ACu, &import_152, "sceUtility::0xF9E0008C");
    runtime.register_function(0x08B0E0B4u, &import_153, "sceRtc::0x011F03C1");
    runtime.register_function(0x08B0E0BCu, &import_154, "sceRtc::0xE1C93E47");
    runtime.register_function(0x08B0E0C4u, &import_155, "sceRtc::0xE7C27D1B");
    runtime.register_function(0x08B0E0CCu, &import_156, "sceMp3::0x07EC321A");
    runtime.register_function(0x08B0E0D4u, &import_157, "sceMp3::0x0DB149F4");
    runtime.register_function(0x08B0E0DCu, &import_158, "sceMp3::0x2A368661");
    runtime.register_function(0x08B0E0E4u, &import_159, "sceMp3::0x354D27EA");
    runtime.register_function(0x08B0E0ECu, &import_160, "sceMp3::0x35750070");
    runtime.register_function(0x08B0E0F4u, &import_161, "sceMp3::0x3C2FA058");
    runtime.register_function(0x08B0E0FCu, &import_162, "sceMp3::0x3CEF484F");
    runtime.register_function(0x08B0E104u, &import_163, "sceMp3::0x44E07129");
    runtime.register_function(0x08B0E10Cu, &import_164, "sceMp3::0x7F696782");
    runtime.register_function(0x08B0E114u, &import_165, "sceMp3::0x87677E40");
    runtime.register_function(0x08B0E11Cu, &import_166, "sceMp3::0x87C263D1");
    runtime.register_function(0x08B0E124u, &import_167, "sceMp3::0x8F450998");
    runtime.register_function(0x08B0E12Cu, &import_168, "sceMp3::0xA703FE0F");
    runtime.register_function(0x08B0E134u, &import_169, "sceMp3::0xD021C0FB");
    runtime.register_function(0x08B0E13Cu, &import_170, "sceMp3::0xD0A56296");
    runtime.register_function(0x08B0E144u, &import_171, "sceMp3::0xF5478233");
    runtime.register_function(0x08B0E14Cu, &import_172, "sceVaudio::0x03B6807D");
    runtime.register_function(0x08B0E154u, &import_173, "sceVaudio::0x67585DFD");
    runtime.register_function(0x08B0E15Cu, &import_174, "sceVaudio::0x8986295E");
    runtime.register_function(0x08B0E164u, &import_175, "sceNetAdhoc::0xA62C6F57");
    runtime.register_function(0x08B0E16Cu, &import_176, "sceNetAdhoc::0xE1D621D7");
    runtime.register_function(0x08B0E174u, &import_177, "sceNetAdhocctl::0x08FFF7A0");
    runtime.register_function(0x08B0E17Cu, &import_178, "sceNetAdhocctl::0x20B317A0");
    runtime.register_function(0x08B0E184u, &import_179, "sceNetAdhocctl::0x34401D65");
    runtime.register_function(0x08B0E18Cu, &import_180, "sceNetAdhocctl::0x6402490B");
    runtime.register_function(0x08B0E194u, &import_181, "sceNetAdhocctl::0x75ECD386");
    runtime.register_function(0x08B0E19Cu, &import_182, "sceNetAdhocctl::0x81AEE1BE");
    runtime.register_function(0x08B0E1A4u, &import_183, "sceNetAdhocctl::0x9D689E13");
    runtime.register_function(0x08B0E1ACu, &import_184, "sceNetAdhocctl::0xDED9D28E");
    runtime.register_function(0x08B0E1B4u, &import_185, "sceNetAdhocctl::0xE162CB14");
    runtime.register_function(0x08B0E1BCu, &import_186, "sceNetAdhocctl::0xE26F226E");
    runtime.register_function(0x08B0E1C4u, &import_187, "sceNetAdhocMatching::0x2A2A1E07");
    runtime.register_function(0x08B0E1CCu, &import_188, "sceNetAdhocMatching::0x32B156B3");
    runtime.register_function(0x08B0E1D4u, &import_189, "sceNetAdhocMatching::0x5E3D4B79");
    runtime.register_function(0x08B0E1DCu, &import_190, "sceNetAdhocMatching::0x7945ECDA");
    runtime.register_function(0x08B0E1E4u, &import_191, "sceNetAdhocMatching::0x8F58BEDF");
    runtime.register_function(0x08B0E1ECu, &import_192, "sceNetAdhocMatching::0x93EF3843");
    runtime.register_function(0x08B0E1F4u, &import_193, "sceNetAdhocMatching::0xCA5EDA6F");
    runtime.register_function(0x08B0E1FCu, &import_194, "sceNetAdhocMatching::0xF16EAF4F");
    runtime.register_function(0x08B0E204u, &import_195, "sceNetAdhocMatching::0xF79472D7");
    runtime.register_function(0x08B0E20Cu, &import_196, "sceWlanDrv::0x0C622081");
    runtime.register_function(0x08B0E214u, &import_197, "sceNet::0x281928A9");
    runtime.register_function(0x08B0E21Cu, &import_198, "sceNet::0x39AF39A6");
    runtime.register_function(0x08B0E224u, &import_199, "sceNet::0x89360950");
    runtime.register_function(0x08B0E22Cu, &import_200, "sceMpeg::0x0E3C2E9D");
    runtime.register_function(0x08B0E234u, &import_201, "sceMpeg::0x0F6C18D7");
    runtime.register_function(0x08B0E23Cu, &import_202, "sceMpeg::0x13407F13");
    runtime.register_function(0x08B0E244u, &import_203, "sceMpeg::0x167AFD9E");
    runtime.register_function(0x08B0E24Cu, &import_204, "sceMpeg::0x21FF80E4");
    runtime.register_function(0x08B0E254u, &import_205, "sceMpeg::0x37295ED8");
    runtime.register_function(0x08B0E25Cu, &import_206, "sceMpeg::0x42560F23");
    runtime.register_function(0x08B0E264u, &import_207, "sceMpeg::0x4571CC64");
    runtime.register_function(0x08B0E26Cu, &import_208, "sceMpeg::0x591A4AA2");
    runtime.register_function(0x08B0E274u, &import_209, "sceMpeg::0x606A4649");
    runtime.register_function(0x08B0E27Cu, &import_210, "sceMpeg::0x611E9E11");
    runtime.register_function(0x08B0E284u, &import_211, "sceMpeg::0x682A619B");
    runtime.register_function(0x08B0E28Cu, &import_212, "sceMpeg::0x707B7629");
    runtime.register_function(0x08B0E294u, &import_213, "sceMpeg::0x740FCCD1");
    runtime.register_function(0x08B0E29Cu, &import_214, "sceMpeg::0x800C44DF");
    runtime.register_function(0x08B0E2A4u, &import_215, "sceMpeg::0x874624D6");
    runtime.register_function(0x08B0E2ACu, &import_216, "sceMpeg::0xA780CF7E");
    runtime.register_function(0x08B0E2B4u, &import_217, "sceMpeg::0xB240A59E");
    runtime.register_function(0x08B0E2BCu, &import_218, "sceMpeg::0xB5F6DC87");
    runtime.register_function(0x08B0E2C4u, &import_219, "sceMpeg::0xC132E22F");
    runtime.register_function(0x08B0E2CCu, &import_220, "sceMpeg::0xCEB870B1");
    runtime.register_function(0x08B0E2D4u, &import_221, "sceMpeg::0xD7A29F46");
    runtime.register_function(0x08B0E2DCu, &import_222, "sceMpeg::0xD8C5F121");
    runtime.register_function(0x08B0E2E4u, &import_223, "sceMpeg::0xE1CE83A7");
    runtime.register_function(0x08B0E2ECu, &import_224, "sceMpeg::0xF8DCB679");
    runtime.register_function(0x08B0E2F4u, &import_225, "sceMpeg::0xFE246728");
    runtime.register_function(0x08B0E2FCu, &import_226, "sceDmac::0x617F3FE6");
    runtime.register_function(0x08B0E304u, &import_227, "sceImpose::0x36AA6E91");
}
} // namespace psprecomp
