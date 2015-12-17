#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

uint16_t* cache;
char* incache;

int wtoi(char* wire) {
	int idx = 0, i;
	for(i = 0; wire[i] != '\0'; i++) {
		idx *= 26;
		idx += wire[i];
	}
	return idx;
}
char iscached(char* wire) {
	return incache[wtoi(wire)];
}
uint16_t getcache(char* wire) {
	return cache[wtoi(wire)];
}
void putcache(char* wire, uint16_t value) {
	cache[wtoi(wire)] = value;
}

uint16_t wire_ls();
uint16_t wire_jn();
uint16_t wire_bv();
uint16_t wire_hc();
uint16_t wire_eu();
uint16_t wire_by();
uint16_t wire_iu();
uint16_t wire_o();
uint16_t wire_gg();
uint16_t wire_ku();
uint16_t wire_ed();
uint16_t wire_ks();
uint16_t wire_hl();
uint16_t wire_ax();
uint16_t wire_lg();
uint16_t wire_df();
uint16_t wire_fc();
uint16_t wire_di();
uint16_t wire_it();
uint16_t wire_em();
uint16_t wire_ff();
uint16_t wire_fn();
uint16_t wire_u();
uint16_t wire_ma();
uint16_t wire_kr();
uint16_t wire_fy();
uint16_t wire_fm();
uint16_t wire_fb();
uint16_t wire_de();
uint16_t wire_gp();
uint16_t wire_ke();
uint16_t wire_hi();
uint16_t wire_kg();
uint16_t wire_co();
uint16_t wire_jq();
uint16_t wire_js();
uint16_t wire_ip();
uint16_t wire_es();
uint16_t wire_jk();
uint16_t wire_j();
uint16_t wire_ck();
uint16_t wire_gq();
uint16_t wire_fv();
uint16_t wire_lm();
uint16_t wire_jo();
uint16_t wire_iw();
uint16_t wire_ij();
uint16_t wire_cd();
uint16_t wire_bp();
uint16_t wire_gx();
uint16_t wire_fu();
uint16_t wire_jp();
uint16_t wire_jc();
uint16_t wire_hw();
uint16_t wire_b();
uint16_t wire_gm();
uint16_t wire_ht();
uint16_t wire_er();
uint16_t wire_ap();
uint16_t wire_lf();
uint16_t wire_ce();
uint16_t wire_cc();
uint16_t wire_bm();
uint16_t wire_io();
uint16_t wire_ai();
uint16_t wire_bl();
uint16_t wire_lh();
uint16_t wire_et();
uint16_t wire_ay();
uint16_t wire_db();
uint16_t wire_fg();
uint16_t wire_ln();
uint16_t wire_n();
uint16_t wire_ia();
uint16_t wire_lb();
uint16_t wire_ez();
uint16_t wire_dj();
uint16_t wire_eg();
uint16_t wire_a();
uint16_t wire_ja();
uint16_t wire_hd();
uint16_t wire_cf();
uint16_t wire_ft();
uint16_t wire_bb();
uint16_t wire_hb();
uint16_t wire_fx();
uint16_t wire_gc();
uint16_t wire_ii();
uint16_t wire_gn();
uint16_t wire_c();
uint16_t wire_cb();
uint16_t wire_cg();
uint16_t wire_t();
uint16_t wire_iy();
uint16_t wire_kh();
uint16_t wire_ek();
uint16_t wire_kp();
uint16_t wire_fd();
uint16_t wire_ib();
uint16_t wire_dr();
uint16_t wire_fh();
uint16_t wire_dz();
uint16_t wire_kl();
uint16_t wire_fj();
uint16_t wire_hs();
uint16_t wire_ki();
uint16_t wire_bn();
uint16_t wire_gz();
uint16_t wire_gu();
uint16_t wire_dd();
uint16_t wire_dl();
uint16_t wire_av();
uint16_t wire_li();
uint16_t wire_hp();
uint16_t wire_ci();
uint16_t wire_gw();
uint16_t wire_gi();
uint16_t wire_g();
uint16_t wire_fw();
uint16_t wire_fe();
uint16_t wire_ch();
uint16_t wire_v();
uint16_t wire_ba();
uint16_t wire_bo();
uint16_t wire_lk();
uint16_t wire_do();
uint16_t wire_ej();
uint16_t wire_fa();
uint16_t wire_kq();
uint16_t wire_ll();
uint16_t wire_ak();
uint16_t wire_kb();
uint16_t wire_je();
uint16_t wire_jb();
uint16_t wire_jr();
uint16_t wire_ga();
uint16_t wire_dh();
uint16_t wire_gk();
uint16_t wire_gv();
uint16_t wire_ji();
uint16_t wire_bj();
uint16_t wire_lt();
uint16_t wire_jl();
uint16_t wire_ca();
uint16_t wire_lz();
uint16_t wire_bd();
uint16_t wire_dc();
uint16_t wire_lq();
uint16_t wire_aq();
uint16_t wire_gr();
uint16_t wire_ky();
uint16_t wire_jj();
uint16_t wire_bz();
uint16_t wire_gf();
uint16_t wire_br();
uint16_t wire_hq();
uint16_t wire_ew();
uint16_t wire_iv();
uint16_t wire_go();
uint16_t wire_aj();
uint16_t wire_he();
uint16_t wire_lo();
uint16_t wire_lj();
uint16_t wire_du();
uint16_t wire_fp();
uint16_t wire_gs();
uint16_t wire_bk();
uint16_t wire_lr();
uint16_t wire_cr();
uint16_t wire_hy();
uint16_t wire_bi();
uint16_t wire_fq();
uint16_t wire_lp();
uint16_t wire_iq();
uint16_t wire_dw();
uint16_t wire_dx();
uint16_t wire_el();
uint16_t wire_ar();
uint16_t wire_as();
uint16_t wire_s();
uint16_t wire_fz();
uint16_t wire_in();
uint16_t wire_ev();
uint16_t wire_dt();
uint16_t wire_ef();
uint16_t wire_al();
uint16_t wire_jm();
uint16_t wire_eo();
uint16_t wire_lc();
uint16_t wire_jh();
uint16_t wire_ix();
uint16_t wire_bw();
uint16_t wire_da();
uint16_t wire_jd();
uint16_t wire_iz();
uint16_t wire_ly();
uint16_t wire_jg();
uint16_t wire_dn();
uint16_t wire_lx();
uint16_t wire_ha();
uint16_t wire_lu();
uint16_t wire_fo();
uint16_t wire_hg();
uint16_t wire_am();
uint16_t wire_la();
uint16_t wire_eb();
uint16_t wire_jf();
uint16_t wire_cp();
uint16_t wire_gy();
uint16_t wire_ex();
uint16_t wire_kc();
uint16_t wire_fl();
uint16_t wire_ea();
uint16_t wire_bt();
uint16_t wire_ah();
uint16_t wire_eh();
uint16_t wire_cz();
uint16_t wire_cw();
uint16_t wire_cy();
uint16_t wire_dm();
uint16_t wire_cn();
uint16_t wire_aa();
uint16_t wire_ep();
uint16_t wire_hf();
uint16_t wire_bx();
uint16_t wire_cm();
uint16_t wire_bs();
uint16_t wire_be();
uint16_t wire_hr();
uint16_t wire_ey();
uint16_t wire_lv();
uint16_t wire_km();
uint16_t wire_p();
uint16_t wire_kd();
uint16_t wire_lw();
uint16_t wire_ko();
uint16_t wire_ig();
uint16_t wire_ik();
uint16_t wire_ju();
uint16_t wire_cl();
uint16_t wire_is();
uint16_t wire_kf();
uint16_t wire_gt();
uint16_t wire_az();
uint16_t wire_y();
uint16_t wire_ae();
uint16_t wire_fi();
uint16_t wire_cv();
uint16_t wire_fk();
uint16_t wire_gl();
uint16_t wire_ao();
uint16_t wire_bc();
uint16_t wire_hk();
uint16_t wire_kz();
uint16_t wire_bf();
uint16_t wire_dy();
uint16_t wire_bu();
uint16_t wire_kx();
uint16_t wire_eq();
uint16_t wire_hx();
uint16_t wire_kk();
uint16_t wire_jv();
uint16_t wire_en();
uint16_t wire_kn();
uint16_t wire_ei();
uint16_t wire_hz();
uint16_t wire_ec();
uint16_t wire_w();
uint16_t wire_gh();
uint16_t wire_kw();
uint16_t wire_bq();
uint16_t wire_ee();
uint16_t wire_hu();
uint16_t wire_cx();
uint16_t wire_f();
uint16_t wire_kt();
uint16_t wire_ir();
uint16_t wire_cj();
uint16_t wire_cq();
uint16_t wire_r();
uint16_t wire_dg();
uint16_t wire_d();
uint16_t wire_kv();
uint16_t wire_e();
uint16_t wire_k();
uint16_t wire_q();
uint16_t wire_cs();
uint16_t wire_dv();
uint16_t wire_kj();
uint16_t wire_ad();
uint16_t wire_fr();
uint16_t wire_il();
uint16_t wire_ka();
uint16_t wire_gj();
uint16_t wire_ld();
uint16_t wire_ic();
uint16_t wire_at();
uint16_t wire_jz();
uint16_t wire_an();
uint16_t wire_cu();
uint16_t wire_hj();
uint16_t wire_jx();
uint16_t wire_x();
uint16_t wire_le();
uint16_t wire_dk();
uint16_t wire_ds();
uint16_t wire_jy();
uint16_t wire_aw();
uint16_t wire_bg();
uint16_t wire_ab();
uint16_t wire_gd();
uint16_t wire_im();
uint16_t wire_jw();
uint16_t wire_ac();
uint16_t wire_jt();
uint16_t wire_hv();
uint16_t wire_hm();
uint16_t wire_id();
uint16_t wire_fs();
uint16_t wire_ct();
uint16_t wire_ih();
uint16_t wire_dp();
uint16_t wire_l();
uint16_t wire_ie();
uint16_t wire_au();
uint16_t wire_bh();
uint16_t wire_dq();
uint16_t wire_m();
uint16_t wire_ge();
uint16_t wire_ag();
uint16_t wire_gb();
uint16_t wire_if();
uint16_t wire_h();
uint16_t wire_z();
uint16_t wire_af();
uint16_t wire_hn();
uint16_t wire_i();
uint16_t wire_ho();
uint16_t wire_hh();
uint16_t wire_ls() {
	uint16_t out;
	if(iscached("ls"))
		return getcache("ls");
	else {
		out = (wire_lf() & wire_lq());
		putcache("ls", out);
		return out;
	}
}
uint16_t wire_jn() {
	uint16_t out;
	if(iscached("jn"))
		return getcache("jn");
	else {
		out = (wire_iu() >> 1);
		putcache("jn", out);
		return out;
	}
}
uint16_t wire_bv() {
	uint16_t out;
	if(iscached("bv"))
		return getcache("bv");
	else {
		out = (wire_bo() | wire_bu());
		putcache("bv", out);
		return out;
	}
}
uint16_t wire_hc() {
	uint16_t out;
	if(iscached("hc"))
		return getcache("hc");
	else {
		out = (wire_gj() >> 1);
		putcache("hc", out);
		return out;
	}
}
uint16_t wire_eu() {
	uint16_t out;
	if(iscached("eu"))
		return getcache("eu");
	else {
		out = (wire_et() >> 2);
		putcache("eu", out);
		return out;
	}
}
uint16_t wire_by() {
	uint16_t out;
	if(iscached("by"))
		return getcache("by");
	else {
		out = (wire_bv() & wire_bx());
		putcache("by", out);
		return out;
	}
}
uint16_t wire_iu() {
	uint16_t out;
	if(iscached("iu"))
		return getcache("iu");
	else {
		out = (wire_is() | wire_it());
		putcache("iu", out);
		return out;
	}
}
uint16_t wire_o() {
	uint16_t out;
	if(iscached("o"))
		return getcache("o");
	else {
		out = (wire_b() | wire_n());
		putcache("o", out);
		return out;
	}
}
uint16_t wire_gg() {
	uint16_t out;
	if(iscached("gg"))
		return getcache("gg");
	else {
		out = (wire_gf() | wire_ge());
		putcache("gg", out);
		return out;
	}
}
uint16_t wire_ku() {
	uint16_t out;
	if(iscached("ku"))
		return getcache("ku");
	else {
		out = ~wire_kt();
		putcache("ku", out);
		return out;
	}
}
uint16_t wire_ed() {
	uint16_t out;
	if(iscached("ed"))
		return getcache("ed");
	else {
		out = (wire_ea() & wire_eb());
		putcache("ed", out);
		return out;
	}
}
uint16_t wire_ks() {
	uint16_t out;
	if(iscached("ks"))
		return getcache("ks");
	else {
		out = (wire_kl() | wire_kr());
		putcache("ks", out);
		return out;
	}
}
uint16_t wire_hl() {
	uint16_t out;
	if(iscached("hl"))
		return getcache("hl");
	else {
		out = (wire_hi() & wire_hk());
		putcache("hl", out);
		return out;
	}
}
uint16_t wire_ax() {
	uint16_t out;
	if(iscached("ax"))
		return getcache("ax");
	else {
		out = (wire_au() & wire_av());
		putcache("ax", out);
		return out;
	}
}
uint16_t wire_lg() {
	uint16_t out;
	if(iscached("lg"))
		return getcache("lg");
	else {
		out = (wire_lf() >> 2);
		putcache("lg", out);
		return out;
	}
}
uint16_t wire_df() {
	uint16_t out;
	if(iscached("df"))
		return getcache("df");
	else {
		out = (wire_dd() >> 3);
		putcache("df", out);
		return out;
	}
}
uint16_t wire_fc() {
	uint16_t out;
	if(iscached("fc"))
		return getcache("fc");
	else {
		out = (wire_eu() & wire_fa());
		putcache("fc", out);
		return out;
	}
}
uint16_t wire_di() {
	uint16_t out;
	if(iscached("di"))
		return getcache("di");
	else {
		out = (wire_df() & wire_dg());
		putcache("di", out);
		return out;
	}
}
uint16_t wire_it() {
	uint16_t out;
	if(iscached("it"))
		return getcache("it");
	else {
		out = (wire_ip() << 15);
		putcache("it", out);
		return out;
	}
}
uint16_t wire_em() {
	uint16_t out;
	if(iscached("em"))
		return getcache("em");
	else {
		out = ~wire_el();
		putcache("em", out);
		return out;
	}
}
uint16_t wire_ff() {
	uint16_t out;
	if(iscached("ff"))
		return getcache("ff");
	else {
		out = (wire_et() | wire_fe());
		putcache("ff", out);
		return out;
	}
}
uint16_t wire_fn() {
	uint16_t out;
	if(iscached("fn"))
		return getcache("fn");
	else {
		out = (wire_fj() << 15);
		putcache("fn", out);
		return out;
	}
}
uint16_t wire_u() {
	uint16_t out;
	if(iscached("u"))
		return getcache("u");
	else {
		out = (wire_t() | wire_s());
		putcache("u", out);
		return out;
	}
}
uint16_t wire_ma() {
	uint16_t out;
	if(iscached("ma"))
		return getcache("ma");
	else {
		out = (wire_ly() | wire_lz());
		putcache("ma", out);
		return out;
	}
}
uint16_t wire_kr() {
	uint16_t out;
	if(iscached("kr"))
		return getcache("kr");
	else {
		out = (wire_ko() & wire_kq());
		putcache("kr", out);
		return out;
	}
}
uint16_t wire_fy() {
	uint16_t out;
	if(iscached("fy"))
		return getcache("fy");
	else {
		out = ~wire_fx();
		putcache("fy", out);
		return out;
	}
}
uint16_t wire_fm() {
	uint16_t out;
	if(iscached("fm"))
		return getcache("fm");
	else {
		out = (wire_et() >> 1);
		putcache("fm", out);
		return out;
	}
}
uint16_t wire_fb() {
	uint16_t out;
	if(iscached("fb"))
		return getcache("fb");
	else {
		out = (wire_eu() | wire_fa());
		putcache("fb", out);
		return out;
	}
}
uint16_t wire_de() {
	uint16_t out;
	if(iscached("de"))
		return getcache("de");
	else {
		out = (wire_dd() >> 2);
		putcache("de", out);
		return out;
	}
}
uint16_t wire_gp() {
	uint16_t out;
	if(iscached("gp"))
		return getcache("gp");
	else {
		out = ~wire_go();
		putcache("gp", out);
		return out;
	}
}
uint16_t wire_ke() {
	uint16_t out;
	if(iscached("ke"))
		return getcache("ke");
	else {
		out = (wire_kb() & wire_kd());
		putcache("ke", out);
		return out;
	}
}
uint16_t wire_hi() {
	uint16_t out;
	if(iscached("hi"))
		return getcache("hi");
	else {
		out = (wire_hg() | wire_hh());
		putcache("hi", out);
		return out;
	}
}
uint16_t wire_kg() {
	uint16_t out;
	if(iscached("kg"))
		return getcache("kg");
	else {
		out = (wire_jm() << 1);
		putcache("kg", out);
		return out;
	}
}
uint16_t wire_co() {
	uint16_t out;
	if(iscached("co"))
		return getcache("co");
	else {
		out = ~wire_cn();
		putcache("co", out);
		return out;
	}
}
uint16_t wire_jq() {
	uint16_t out;
	if(iscached("jq"))
		return getcache("jq");
	else {
		out = (wire_jp() >> 2);
		putcache("jq", out);
		return out;
	}
}
uint16_t wire_js() {
	uint16_t out;
	if(iscached("js"))
		return getcache("js");
	else {
		out = (wire_jp() >> 5);
		putcache("js", out);
		return out;
	}
}
uint16_t wire_ip() {
	uint16_t out;
	if(iscached("ip"))
		return getcache("ip");
	else {
		out = (1 & wire_io());
		putcache("ip", out);
		return out;
	}
}
uint16_t wire_es() {
	uint16_t out;
	if(iscached("es"))
		return getcache("es");
	else {
		out = (wire_eo() << 15);
		putcache("es", out);
		return out;
	}
}
uint16_t wire_jk() {
	uint16_t out;
	if(iscached("jk"))
		return getcache("jk");
	else {
		out = (1 & wire_jj());
		putcache("jk", out);
		return out;
	}
}
uint16_t wire_j() {
	uint16_t out;
	if(iscached("j"))
		return getcache("j");
	else {
		out = (wire_g() & wire_i());
		putcache("j", out);
		return out;
	}
}
uint16_t wire_ck() {
	uint16_t out;
	if(iscached("ck"))
		return getcache("ck");
	else {
		out = (wire_ci() >> 3);
		putcache("ck", out);
		return out;
	}
}
uint16_t wire_gq() {
	uint16_t out;
	if(iscached("gq"))
		return getcache("gq");
	else {
		out = (wire_gn() & wire_gp());
		putcache("gq", out);
		return out;
	}
}
uint16_t wire_fv() {
	uint16_t out;
	if(iscached("fv"))
		return getcache("fv");
	else {
		out = (wire_fs() & wire_fu());
		putcache("fv", out);
		return out;
	}
}
uint16_t wire_lm() {
	uint16_t out;
	if(iscached("lm"))
		return getcache("lm");
	else {
		out = (wire_lj() & wire_ll());
		putcache("lm", out);
		return out;
	}
}
uint16_t wire_jo() {
	uint16_t out;
	if(iscached("jo"))
		return getcache("jo");
	else {
		out = (wire_jk() << 15);
		putcache("jo", out);
		return out;
	}
}
uint16_t wire_iw() {
	uint16_t out;
	if(iscached("iw"))
		return getcache("iw");
	else {
		out = (wire_iu() >> 3);
		putcache("iw", out);
		return out;
	}
}
uint16_t wire_ij() {
	uint16_t out;
	if(iscached("ij"))
		return getcache("ij");
	else {
		out = ~wire_ii();
		putcache("ij", out);
		return out;
	}
}
uint16_t wire_cd() {
	uint16_t out;
	if(iscached("cd"))
		return getcache("cd");
	else {
		out = (1 & wire_cc());
		putcache("cd", out);
		return out;
	}
}
uint16_t wire_bp() {
	uint16_t out;
	if(iscached("bp"))
		return getcache("bp");
	else {
		out = (wire_bn() >> 3);
		putcache("bp", out);
		return out;
	}
}
uint16_t wire_gx() {
	uint16_t out;
	if(iscached("gx"))
		return getcache("gx");
	else {
		out = ~wire_gw();
		putcache("gx", out);
		return out;
	}
}
uint16_t wire_fu() {
	uint16_t out;
	if(iscached("fu"))
		return getcache("fu");
	else {
		out = ~wire_ft();
		putcache("fu", out);
		return out;
	}
}
uint16_t wire_jp() {
	uint16_t out;
	if(iscached("jp"))
		return getcache("jp");
	else {
		out = (wire_jn() | wire_jo());
		putcache("jp", out);
		return out;
	}
}
uint16_t wire_jc() {
	uint16_t out;
	if(iscached("jc"))
		return getcache("jc");
	else {
		out = (wire_iv() | wire_jb());
		putcache("jc", out);
		return out;
	}
}
uint16_t wire_hw() {
	uint16_t out;
	if(iscached("hw"))
		return getcache("hw");
	else {
		out = (wire_hv() | wire_hu());
		putcache("hw", out);
		return out;
	}
}
uint16_t wire_b() {
	uint16_t out;
	if(iscached("b"))
		return getcache("b");
	else {
		out = 19138;
		putcache("b", out);
		return out;
	}
}
uint16_t wire_gm() {
	uint16_t out;
	if(iscached("gm"))
		return getcache("gm");
	else {
		out = (wire_gj() >> 5);
		putcache("gm", out);
		return out;
	}
}
uint16_t wire_ht() {
	uint16_t out;
	if(iscached("ht"))
		return getcache("ht");
	else {
		out = (wire_hq() & wire_hs());
		putcache("ht", out);
		return out;
	}
}
uint16_t wire_er() {
	uint16_t out;
	if(iscached("er"))
		return getcache("er");
	else {
		out = (wire_dy() >> 1);
		putcache("er", out);
		return out;
	}
}
uint16_t wire_ap() {
	uint16_t out;
	if(iscached("ap"))
		return getcache("ap");
	else {
		out = (wire_ao() | wire_an());
		putcache("ap", out);
		return out;
	}
}
uint16_t wire_lf() {
	uint16_t out;
	if(iscached("lf"))
		return getcache("lf");
	else {
		out = (wire_ld() | wire_le());
		putcache("lf", out);
		return out;
	}
}
uint16_t wire_ce() {
	uint16_t out;
	if(iscached("ce"))
		return getcache("ce");
	else {
		out = (wire_bk() << 1);
		putcache("ce", out);
		return out;
	}
}
uint16_t wire_cc() {
	uint16_t out;
	if(iscached("cc"))
		return getcache("cc");
	else {
		out = (wire_bz() & wire_cb());
		putcache("cc", out);
		return out;
	}
}
uint16_t wire_bm() {
	uint16_t out;
	if(iscached("bm"))
		return getcache("bm");
	else {
		out = (wire_bi() << 15);
		putcache("bm", out);
		return out;
	}
}
uint16_t wire_io() {
	uint16_t out;
	if(iscached("io"))
		return getcache("io");
	else {
		out = (wire_il() & wire_in());
		putcache("io", out);
		return out;
	}
}
uint16_t wire_ai() {
	uint16_t out;
	if(iscached("ai"))
		return getcache("ai");
	else {
		out = (wire_af() & wire_ah());
		putcache("ai", out);
		return out;
	}
}
uint16_t wire_bl() {
	uint16_t out;
	if(iscached("bl"))
		return getcache("bl");
	else {
		out = (wire_as() >> 1);
		putcache("bl", out);
		return out;
	}
}
uint16_t wire_lh() {
	uint16_t out;
	if(iscached("lh"))
		return getcache("lh");
	else {
		out = (wire_lf() >> 3);
		putcache("lh", out);
		return out;
	}
}
uint16_t wire_et() {
	uint16_t out;
	if(iscached("et"))
		return getcache("et");
	else {
		out = (wire_er() | wire_es());
		putcache("et", out);
		return out;
	}
}
uint16_t wire_ay() {
	uint16_t out;
	if(iscached("ay"))
		return getcache("ay");
	else {
		out = ~wire_ax();
		putcache("ay", out);
		return out;
	}
}
uint16_t wire_db() {
	uint16_t out;
	if(iscached("db"))
		return getcache("db");
	else {
		out = (wire_ci() >> 1);
		putcache("db", out);
		return out;
	}
}
uint16_t wire_fg() {
	uint16_t out;
	if(iscached("fg"))
		return getcache("fg");
	else {
		out = (wire_et() & wire_fe());
		putcache("fg", out);
		return out;
	}
}
uint16_t wire_ln() {
	uint16_t out;
	if(iscached("ln"))
		return getcache("ln");
	else {
		out = (wire_lg() | wire_lm());
		putcache("ln", out);
		return out;
	}
}
uint16_t wire_n() {
	uint16_t out;
	if(iscached("n"))
		return getcache("n");
	else {
		out = (wire_k() & wire_m());
		putcache("n", out);
		return out;
	}
}
uint16_t wire_ia() {
	uint16_t out;
	if(iscached("ia"))
		return getcache("ia");
	else {
		out = (wire_hz() >> 2);
		putcache("ia", out);
		return out;
	}
}
uint16_t wire_lb() {
	uint16_t out;
	if(iscached("lb"))
		return getcache("lb");
	else {
		out = (wire_kh() << 1);
		putcache("lb", out);
		return out;
	}
}
uint16_t wire_ez() {
	uint16_t out;
	if(iscached("ez"))
		return getcache("ez");
	else {
		out = ~wire_ey();
		putcache("ez", out);
		return out;
	}
}
uint16_t wire_dj() {
	uint16_t out;
	if(iscached("dj"))
		return getcache("dj");
	else {
		out = ~wire_di();
		putcache("dj", out);
		return out;
	}
}
uint16_t wire_eg() {
	uint16_t out;
	if(iscached("eg"))
		return getcache("eg");
	else {
		out = (wire_dz() | wire_ef());
		putcache("eg", out);
		return out;
	}
}
uint16_t wire_a() {
	uint16_t out;
	if(iscached("a"))
		return getcache("a");
	else {
		out = wire_lx();
		putcache("a", out);
		return out;
	}
}
uint16_t wire_ja() {
	uint16_t out;
	if(iscached("ja"))
		return getcache("ja");
	else {
		out = ~wire_iz();
		putcache("ja", out);
		return out;
	}
}
uint16_t wire_hd() {
	uint16_t out;
	if(iscached("hd"))
		return getcache("hd");
	else {
		out = (wire_gz() << 15);
		putcache("hd", out);
		return out;
	}
}
uint16_t wire_cf() {
	uint16_t out;
	if(iscached("cf"))
		return getcache("cf");
	else {
		out = (wire_ce() | wire_cd());
		putcache("cf", out);
		return out;
	}
}
uint16_t wire_ft() {
	uint16_t out;
	if(iscached("ft"))
		return getcache("ft");
	else {
		out = (wire_fq() & wire_fr());
		putcache("ft", out);
		return out;
	}
}
uint16_t wire_bb() {
	uint16_t out;
	if(iscached("bb"))
		return getcache("bb");
	else {
		out = (wire_at() & wire_az());
		putcache("bb", out);
		return out;
	}
}
uint16_t wire_hb() {
	uint16_t out;
	if(iscached("hb"))
		return getcache("hb");
	else {
		out = (wire_ha() | wire_gz());
		putcache("hb", out);
		return out;
	}
}
uint16_t wire_fx() {
	uint16_t out;
	if(iscached("fx"))
		return getcache("fx");
	else {
		out = (wire_fp() & wire_fv());
		putcache("fx", out);
		return out;
	}
}
uint16_t wire_gc() {
	uint16_t out;
	if(iscached("gc"))
		return getcache("gc");
	else {
		out = ~wire_gb();
		putcache("gc", out);
		return out;
	}
}
uint16_t wire_ii() {
	uint16_t out;
	if(iscached("ii"))
		return getcache("ii");
	else {
		out = (wire_ia() & wire_ig());
		putcache("ii", out);
		return out;
	}
}
uint16_t wire_gn() {
	uint16_t out;
	if(iscached("gn"))
		return getcache("gn");
	else {
		out = (wire_gl() | wire_gm());
		putcache("gn", out);
		return out;
	}
}
uint16_t wire_c() {
	uint16_t out;
	if(iscached("c"))
		return getcache("c");
	else {
		out = 0;
		putcache("c", out);
		return out;
	}
}
uint16_t wire_cb() {
	uint16_t out;
	if(iscached("cb"))
		return getcache("cb");
	else {
		out = ~wire_ca();
		putcache("cb", out);
		return out;
	}
}
uint16_t wire_cg() {
	uint16_t out;
	if(iscached("cg"))
		return getcache("cg");
	else {
		out = (wire_bn() >> 1);
		putcache("cg", out);
		return out;
	}
}
uint16_t wire_t() {
	uint16_t out;
	if(iscached("t"))
		return getcache("t");
	else {
		out = (wire_c() << 1);
		putcache("t", out);
		return out;
	}
}
uint16_t wire_iy() {
	uint16_t out;
	if(iscached("iy"))
		return getcache("iy");
	else {
		out = (wire_iw() | wire_ix());
		putcache("iy", out);
		return out;
	}
}
uint16_t wire_kh() {
	uint16_t out;
	if(iscached("kh"))
		return getcache("kh");
	else {
		out = (wire_kg() | wire_kf());
		putcache("kh", out);
		return out;
	}
}
uint16_t wire_ek() {
	uint16_t out;
	if(iscached("ek"))
		return getcache("ek");
	else {
		out = (wire_dy() | wire_ej());
		putcache("ek", out);
		return out;
	}
}
uint16_t wire_kp() {
	uint16_t out;
	if(iscached("kp"))
		return getcache("kp");
	else {
		out = (wire_km() & wire_kn());
		putcache("kp", out);
		return out;
	}
}
uint16_t wire_fd() {
	uint16_t out;
	if(iscached("fd"))
		return getcache("fd");
	else {
		out = ~wire_fc();
		putcache("fd", out);
		return out;
	}
}
uint16_t wire_ib() {
	uint16_t out;
	if(iscached("ib"))
		return getcache("ib");
	else {
		out = (wire_hz() >> 3);
		putcache("ib", out);
		return out;
	}
}
uint16_t wire_dr() {
	uint16_t out;
	if(iscached("dr"))
		return getcache("dr");
	else {
		out = ~wire_dq();
		putcache("dr", out);
		return out;
	}
}
uint16_t wire_fh() {
	uint16_t out;
	if(iscached("fh"))
		return getcache("fh");
	else {
		out = ~wire_fg();
		putcache("fh", out);
		return out;
	}
}
uint16_t wire_dz() {
	uint16_t out;
	if(iscached("dz"))
		return getcache("dz");
	else {
		out = (wire_dy() >> 2);
		putcache("dz", out);
		return out;
	}
}
uint16_t wire_kl() {
	uint16_t out;
	if(iscached("kl"))
		return getcache("kl");
	else {
		out = (wire_kk() >> 2);
		putcache("kl", out);
		return out;
	}
}
uint16_t wire_fj() {
	uint16_t out;
	if(iscached("fj"))
		return getcache("fj");
	else {
		out = (1 & wire_fi());
		putcache("fj", out);
		return out;
	}
}
uint16_t wire_hs() {
	uint16_t out;
	if(iscached("hs"))
		return getcache("hs");
	else {
		out = ~wire_hr();
		putcache("hs", out);
		return out;
	}
}
uint16_t wire_ki() {
	uint16_t out;
	if(iscached("ki"))
		return getcache("ki");
	else {
		out = (wire_jp() >> 1);
		putcache("ki", out);
		return out;
	}
}
uint16_t wire_bn() {
	uint16_t out;
	if(iscached("bn"))
		return getcache("bn");
	else {
		out = (wire_bl() | wire_bm());
		putcache("bn", out);
		return out;
	}
}
uint16_t wire_gz() {
	uint16_t out;
	if(iscached("gz"))
		return getcache("gz");
	else {
		out = (1 & wire_gy());
		putcache("gz", out);
		return out;
	}
}
uint16_t wire_gu() {
	uint16_t out;
	if(iscached("gu"))
		return getcache("gu");
	else {
		out = (wire_gr() & wire_gt());
		putcache("gu", out);
		return out;
	}
}
uint16_t wire_dd() {
	uint16_t out;
	if(iscached("dd"))
		return getcache("dd");
	else {
		out = (wire_db() | wire_dc());
		putcache("dd", out);
		return out;
	}
}
uint16_t wire_dl() {
	uint16_t out;
	if(iscached("dl"))
		return getcache("dl");
	else {
		out = (wire_de() | wire_dk());
		putcache("dl", out);
		return out;
	}
}
uint16_t wire_av() {
	uint16_t out;
	if(iscached("av"))
		return getcache("av");
	else {
		out = (wire_as() >> 5);
		putcache("av", out);
		return out;
	}
}
uint16_t wire_li() {
	uint16_t out;
	if(iscached("li"))
		return getcache("li");
	else {
		out = (wire_lf() >> 5);
		putcache("li", out);
		return out;
	}
}
uint16_t wire_hp() {
	uint16_t out;
	if(iscached("hp"))
		return getcache("hp");
	else {
		out = (wire_hm() & wire_ho());
		putcache("hp", out);
		return out;
	}
}
uint16_t wire_ci() {
	uint16_t out;
	if(iscached("ci"))
		return getcache("ci");
	else {
		out = (wire_cg() | wire_ch());
		putcache("ci", out);
		return out;
	}
}
uint16_t wire_gw() {
	uint16_t out;
	if(iscached("gw"))
		return getcache("gw");
	else {
		out = (wire_gj() & wire_gu());
		putcache("gw", out);
		return out;
	}
}
uint16_t wire_gi() {
	uint16_t out;
	if(iscached("gi"))
		return getcache("gi");
	else {
		out = (wire_ge() << 15);
		putcache("gi", out);
		return out;
	}
}
uint16_t wire_g() {
	uint16_t out;
	if(iscached("g"))
		return getcache("g");
	else {
		out = (wire_e() | wire_f());
		putcache("g", out);
		return out;
	}
}
uint16_t wire_fw() {
	uint16_t out;
	if(iscached("fw"))
		return getcache("fw");
	else {
		out = (wire_fp() | wire_fv());
		putcache("fw", out);
		return out;
	}
}
uint16_t wire_fe() {
	uint16_t out;
	if(iscached("fe"))
		return getcache("fe");
	else {
		out = (wire_fb() & wire_fd());
		putcache("fe", out);
		return out;
	}
}
uint16_t wire_ch() {
	uint16_t out;
	if(iscached("ch"))
		return getcache("ch");
	else {
		out = (wire_cd() << 15);
		putcache("ch", out);
		return out;
	}
}
uint16_t wire_v() {
	uint16_t out;
	if(iscached("v"))
		return getcache("v");
	else {
		out = (wire_b() >> 1);
		putcache("v", out);
		return out;
	}
}
uint16_t wire_ba() {
	uint16_t out;
	if(iscached("ba"))
		return getcache("ba");
	else {
		out = (wire_at() | wire_az());
		putcache("ba", out);
		return out;
	}
}
uint16_t wire_bo() {
	uint16_t out;
	if(iscached("bo"))
		return getcache("bo");
	else {
		out = (wire_bn() >> 2);
		putcache("bo", out);
		return out;
	}
}
uint16_t wire_lk() {
	uint16_t out;
	if(iscached("lk"))
		return getcache("lk");
	else {
		out = (wire_lh() & wire_li());
		putcache("lk", out);
		return out;
	}
}
uint16_t wire_do() {
	uint16_t out;
	if(iscached("do"))
		return getcache("do");
	else {
		out = (wire_dl() & wire_dn());
		putcache("do", out);
		return out;
	}
}
uint16_t wire_ej() {
	uint16_t out;
	if(iscached("ej"))
		return getcache("ej");
	else {
		out = (wire_eg() & wire_ei());
		putcache("ej", out);
		return out;
	}
}
uint16_t wire_fa() {
	uint16_t out;
	if(iscached("fa"))
		return getcache("fa");
	else {
		out = (wire_ex() & wire_ez());
		putcache("fa", out);
		return out;
	}
}
uint16_t wire_kq() {
	uint16_t out;
	if(iscached("kq"))
		return getcache("kq");
	else {
		out = ~wire_kp();
		putcache("kq", out);
		return out;
	}
}
uint16_t wire_ll() {
	uint16_t out;
	if(iscached("ll"))
		return getcache("ll");
	else {
		out = ~wire_lk();
		putcache("ll", out);
		return out;
	}
}
uint16_t wire_ak() {
	uint16_t out;
	if(iscached("ak"))
		return getcache("ak");
	else {
		out = (wire_x() & wire_ai());
		putcache("ak", out);
		return out;
	}
}
uint16_t wire_kb() {
	uint16_t out;
	if(iscached("kb"))
		return getcache("kb");
	else {
		out = (wire_jp() | wire_ka());
		putcache("kb", out);
		return out;
	}
}
uint16_t wire_je() {
	uint16_t out;
	if(iscached("je"))
		return getcache("je");
	else {
		out = ~wire_jd();
		putcache("je", out);
		return out;
	}
}
uint16_t wire_jb() {
	uint16_t out;
	if(iscached("jb"))
		return getcache("jb");
	else {
		out = (wire_iy() & wire_ja());
		putcache("jb", out);
		return out;
	}
}
uint16_t wire_jr() {
	uint16_t out;
	if(iscached("jr"))
		return getcache("jr");
	else {
		out = (wire_jp() >> 3);
		putcache("jr", out);
		return out;
	}
}
uint16_t wire_ga() {
	uint16_t out;
	if(iscached("ga"))
		return getcache("ga");
	else {
		out = (wire_fo() | wire_fz());
		putcache("ga", out);
		return out;
	}
}
uint16_t wire_dh() {
	uint16_t out;
	if(iscached("dh"))
		return getcache("dh");
	else {
		out = (wire_df() | wire_dg());
		putcache("dh", out);
		return out;
	}
}
uint16_t wire_gk() {
	uint16_t out;
	if(iscached("gk"))
		return getcache("gk");
	else {
		out = (wire_gj() >> 2);
		putcache("gk", out);
		return out;
	}
}
uint16_t wire_gv() {
	uint16_t out;
	if(iscached("gv"))
		return getcache("gv");
	else {
		out = (wire_gj() | wire_gu());
		putcache("gv", out);
		return out;
	}
}
uint16_t wire_ji() {
	uint16_t out;
	if(iscached("ji"))
		return getcache("ji");
	else {
		out = ~wire_jh();
		putcache("ji", out);
		return out;
	}
}
uint16_t wire_bj() {
	uint16_t out;
	if(iscached("bj"))
		return getcache("bj");
	else {
		out = (wire_ap() << 1);
		putcache("bj", out);
		return out;
	}
}
uint16_t wire_lt() {
	uint16_t out;
	if(iscached("lt"))
		return getcache("lt");
	else {
		out = ~wire_ls();
		putcache("lt", out);
		return out;
	}
}
uint16_t wire_jl() {
	uint16_t out;
	if(iscached("jl"))
		return getcache("jl");
	else {
		out = (wire_ir() << 1);
		putcache("jl", out);
		return out;
	}
}
uint16_t wire_ca() {
	uint16_t out;
	if(iscached("ca"))
		return getcache("ca");
	else {
		out = (wire_bn() & wire_by());
		putcache("ca", out);
		return out;
	}
}
uint16_t wire_lz() {
	uint16_t out;
	if(iscached("lz"))
		return getcache("lz");
	else {
		out = (wire_lv() << 15);
		putcache("lz", out);
		return out;
	}
}
uint16_t wire_bd() {
	uint16_t out;
	if(iscached("bd"))
		return getcache("bd");
	else {
		out = (wire_ba() & wire_bc());
		putcache("bd", out);
		return out;
	}
}
uint16_t wire_dc() {
	uint16_t out;
	if(iscached("dc"))
		return getcache("dc");
	else {
		out = (wire_cy() << 15);
		putcache("dc", out);
		return out;
	}
}
uint16_t wire_lq() {
	uint16_t out;
	if(iscached("lq"))
		return getcache("lq");
	else {
		out = (wire_ln() & wire_lp());
		putcache("lq", out);
		return out;
	}
}
uint16_t wire_aq() {
	uint16_t out;
	if(iscached("aq"))
		return getcache("aq");
	else {
		out = (wire_x() >> 1);
		putcache("aq", out);
		return out;
	}
}
uint16_t wire_gr() {
	uint16_t out;
	if(iscached("gr"))
		return getcache("gr");
	else {
		out = (wire_gk() | wire_gq());
		putcache("gr", out);
		return out;
	}
}
uint16_t wire_ky() {
	uint16_t out;
	if(iscached("ky"))
		return getcache("ky");
	else {
		out = ~wire_kx();
		putcache("ky", out);
		return out;
	}
}
uint16_t wire_jj() {
	uint16_t out;
	if(iscached("jj"))
		return getcache("jj");
	else {
		out = (wire_jg() & wire_ji());
		putcache("jj", out);
		return out;
	}
}
uint16_t wire_bz() {
	uint16_t out;
	if(iscached("bz"))
		return getcache("bz");
	else {
		out = (wire_bn() | wire_by());
		putcache("bz", out);
		return out;
	}
}
uint16_t wire_gf() {
	uint16_t out;
	if(iscached("gf"))
		return getcache("gf");
	else {
		out = (wire_fl() << 1);
		putcache("gf", out);
		return out;
	}
}
uint16_t wire_br() {
	uint16_t out;
	if(iscached("br"))
		return getcache("br");
	else {
		out = (wire_bp() | wire_bq());
		putcache("br", out);
		return out;
	}
}
uint16_t wire_hq() {
	uint16_t out;
	if(iscached("hq"))
		return getcache("hq");
	else {
		out = (wire_he() | wire_hp());
		putcache("hq", out);
		return out;
	}
}
uint16_t wire_ew() {
	uint16_t out;
	if(iscached("ew"))
		return getcache("ew");
	else {
		out = (wire_et() >> 5);
		putcache("ew", out);
		return out;
	}
}
uint16_t wire_iv() {
	uint16_t out;
	if(iscached("iv"))
		return getcache("iv");
	else {
		out = (wire_iu() >> 2);
		putcache("iv", out);
		return out;
	}
}
uint16_t wire_go() {
	uint16_t out;
	if(iscached("go"))
		return getcache("go");
	else {
		out = (wire_gl() & wire_gm());
		putcache("go", out);
		return out;
	}
}
uint16_t wire_aj() {
	uint16_t out;
	if(iscached("aj"))
		return getcache("aj");
	else {
		out = (wire_x() | wire_ai());
		putcache("aj", out);
		return out;
	}
}
uint16_t wire_he() {
	uint16_t out;
	if(iscached("he"))
		return getcache("he");
	else {
		out = (wire_hc() | wire_hd());
		putcache("he", out);
		return out;
	}
}
uint16_t wire_lo() {
	uint16_t out;
	if(iscached("lo"))
		return getcache("lo");
	else {
		out = (wire_lg() & wire_lm());
		putcache("lo", out);
		return out;
	}
}
uint16_t wire_lj() {
	uint16_t out;
	if(iscached("lj"))
		return getcache("lj");
	else {
		out = (wire_lh() | wire_li());
		putcache("lj", out);
		return out;
	}
}
uint16_t wire_du() {
	uint16_t out;
	if(iscached("du"))
		return getcache("du");
	else {
		out = (wire_da() << 1);
		putcache("du", out);
		return out;
	}
}
uint16_t wire_fp() {
	uint16_t out;
	if(iscached("fp"))
		return getcache("fp");
	else {
		out = (wire_fo() >> 2);
		putcache("fp", out);
		return out;
	}
}
uint16_t wire_gs() {
	uint16_t out;
	if(iscached("gs"))
		return getcache("gs");
	else {
		out = (wire_gk() & wire_gq());
		putcache("gs", out);
		return out;
	}
}
uint16_t wire_bk() {
	uint16_t out;
	if(iscached("bk"))
		return getcache("bk");
	else {
		out = (wire_bj() | wire_bi());
		putcache("bk", out);
		return out;
	}
}
uint16_t wire_lr() {
	uint16_t out;
	if(iscached("lr"))
		return getcache("lr");
	else {
		out = (wire_lf() | wire_lq());
		putcache("lr", out);
		return out;
	}
}
uint16_t wire_cr() {
	uint16_t out;
	if(iscached("cr"))
		return getcache("cr");
	else {
		out = (wire_cj() & wire_cp());
		putcache("cr", out);
		return out;
	}
}
uint16_t wire_hy() {
	uint16_t out;
	if(iscached("hy"))
		return getcache("hy");
	else {
		out = (wire_hu() << 15);
		putcache("hy", out);
		return out;
	}
}
uint16_t wire_bi() {
	uint16_t out;
	if(iscached("bi"))
		return getcache("bi");
	else {
		out = (1 & wire_bh());
		putcache("bi", out);
		return out;
	}
}
uint16_t wire_fq() {
	uint16_t out;
	if(iscached("fq"))
		return getcache("fq");
	else {
		out = (wire_fo() >> 3);
		putcache("fq", out);
		return out;
	}
}
uint16_t wire_lp() {
	uint16_t out;
	if(iscached("lp"))
		return getcache("lp");
	else {
		out = ~wire_lo();
		putcache("lp", out);
		return out;
	}
}
uint16_t wire_iq() {
	uint16_t out;
	if(iscached("iq"))
		return getcache("iq");
	else {
		out = (wire_hw() << 1);
		putcache("iq", out);
		return out;
	}
}
uint16_t wire_dw() {
	uint16_t out;
	if(iscached("dw"))
		return getcache("dw");
	else {
		out = (wire_dd() >> 1);
		putcache("dw", out);
		return out;
	}
}
uint16_t wire_dx() {
	uint16_t out;
	if(iscached("dx"))
		return getcache("dx");
	else {
		out = (wire_dt() << 15);
		putcache("dx", out);
		return out;
	}
}
uint16_t wire_el() {
	uint16_t out;
	if(iscached("el"))
		return getcache("el");
	else {
		out = (wire_dy() & wire_ej());
		putcache("el", out);
		return out;
	}
}
uint16_t wire_ar() {
	uint16_t out;
	if(iscached("ar"))
		return getcache("ar");
	else {
		out = (wire_an() << 15);
		putcache("ar", out);
		return out;
	}
}
uint16_t wire_as() {
	uint16_t out;
	if(iscached("as"))
		return getcache("as");
	else {
		out = (wire_aq() | wire_ar());
		putcache("as", out);
		return out;
	}
}
uint16_t wire_s() {
	uint16_t out;
	if(iscached("s"))
		return getcache("s");
	else {
		out = (1 & wire_r());
		putcache("s", out);
		return out;
	}
}
uint16_t wire_fz() {
	uint16_t out;
	if(iscached("fz"))
		return getcache("fz");
	else {
		out = (wire_fw() & wire_fy());
		putcache("fz", out);
		return out;
	}
}
uint16_t wire_in() {
	uint16_t out;
	if(iscached("in"))
		return getcache("in");
	else {
		out = ~wire_im();
		putcache("in", out);
		return out;
	}
}
uint16_t wire_ev() {
	uint16_t out;
	if(iscached("ev"))
		return getcache("ev");
	else {
		out = (wire_et() >> 3);
		putcache("ev", out);
		return out;
	}
}
uint16_t wire_dt() {
	uint16_t out;
	if(iscached("dt"))
		return getcache("dt");
	else {
		out = (1 & wire_ds());
		putcache("dt", out);
		return out;
	}
}
uint16_t wire_ef() {
	uint16_t out;
	if(iscached("ef"))
		return getcache("ef");
	else {
		out = (wire_ec() & wire_ee());
		putcache("ef", out);
		return out;
	}
}
uint16_t wire_al() {
	uint16_t out;
	if(iscached("al"))
		return getcache("al");
	else {
		out = ~wire_ak();
		putcache("al", out);
		return out;
	}
}
uint16_t wire_jm() {
	uint16_t out;
	if(iscached("jm"))
		return getcache("jm");
	else {
		out = (wire_jl() | wire_jk());
		putcache("jm", out);
		return out;
	}
}
uint16_t wire_eo() {
	uint16_t out;
	if(iscached("eo"))
		return getcache("eo");
	else {
		out = (1 & wire_en());
		putcache("eo", out);
		return out;
	}
}
uint16_t wire_lc() {
	uint16_t out;
	if(iscached("lc"))
		return getcache("lc");
	else {
		out = (wire_lb() | wire_la());
		putcache("lc", out);
		return out;
	}
}
uint16_t wire_jh() {
	uint16_t out;
	if(iscached("jh"))
		return getcache("jh");
	else {
		out = (wire_iu() & wire_jf());
		putcache("jh", out);
		return out;
	}
}
uint16_t wire_ix() {
	uint16_t out;
	if(iscached("ix"))
		return getcache("ix");
	else {
		out = (wire_iu() >> 5);
		putcache("ix", out);
		return out;
	}
}
uint16_t wire_bw() {
	uint16_t out;
	if(iscached("bw"))
		return getcache("bw");
	else {
		out = (wire_bo() & wire_bu());
		putcache("bw", out);
		return out;
	}
}
uint16_t wire_da() {
	uint16_t out;
	if(iscached("da"))
		return getcache("da");
	else {
		out = (wire_cz() | wire_cy());
		putcache("da", out);
		return out;
	}
}
uint16_t wire_jd() {
	uint16_t out;
	if(iscached("jd"))
		return getcache("jd");
	else {
		out = (wire_iv() & wire_jb());
		putcache("jd", out);
		return out;
	}
}
uint16_t wire_iz() {
	uint16_t out;
	if(iscached("iz"))
		return getcache("iz");
	else {
		out = (wire_iw() & wire_ix());
		putcache("iz", out);
		return out;
	}
}
uint16_t wire_ly() {
	uint16_t out;
	if(iscached("ly"))
		return getcache("ly");
	else {
		out = (wire_lf() >> 1);
		putcache("ly", out);
		return out;
	}
}
uint16_t wire_jg() {
	uint16_t out;
	if(iscached("jg"))
		return getcache("jg");
	else {
		out = (wire_iu() | wire_jf());
		putcache("jg", out);
		return out;
	}
}
uint16_t wire_dn() {
	uint16_t out;
	if(iscached("dn"))
		return getcache("dn");
	else {
		out = ~wire_dm();
		putcache("dn", out);
		return out;
	}
}
uint16_t wire_lx() {
	uint16_t out;
	if(iscached("lx"))
		return getcache("lx");
	else {
		out = (wire_lw() | wire_lv());
		putcache("lx", out);
		return out;
	}
}
uint16_t wire_ha() {
	uint16_t out;
	if(iscached("ha"))
		return getcache("ha");
	else {
		out = (wire_gg() << 1);
		putcache("ha", out);
		return out;
	}
}
uint16_t wire_lu() {
	uint16_t out;
	if(iscached("lu"))
		return getcache("lu");
	else {
		out = (wire_lr() & wire_lt());
		putcache("lu", out);
		return out;
	}
}
uint16_t wire_fo() {
	uint16_t out;
	if(iscached("fo"))
		return getcache("fo");
	else {
		out = (wire_fm() | wire_fn());
		putcache("fo", out);
		return out;
	}
}
uint16_t wire_hg() {
	uint16_t out;
	if(iscached("hg"))
		return getcache("hg");
	else {
		out = (wire_he() >> 3);
		putcache("hg", out);
		return out;
	}
}
uint16_t wire_am() {
	uint16_t out;
	if(iscached("am"))
		return getcache("am");
	else {
		out = (wire_aj() & wire_al());
		putcache("am", out);
		return out;
	}
}
uint16_t wire_la() {
	uint16_t out;
	if(iscached("la"))
		return getcache("la");
	else {
		out = (1 & wire_kz());
		putcache("la", out);
		return out;
	}
}
uint16_t wire_eb() {
	uint16_t out;
	if(iscached("eb"))
		return getcache("eb");
	else {
		out = (wire_dy() >> 5);
		putcache("eb", out);
		return out;
	}
}
uint16_t wire_jf() {
	uint16_t out;
	if(iscached("jf"))
		return getcache("jf");
	else {
		out = (wire_jc() & wire_je());
		putcache("jf", out);
		return out;
	}
}
uint16_t wire_cp() {
	uint16_t out;
	if(iscached("cp"))
		return getcache("cp");
	else {
		out = (wire_cm() & wire_co());
		putcache("cp", out);
		return out;
	}
}
uint16_t wire_gy() {
	uint16_t out;
	if(iscached("gy"))
		return getcache("gy");
	else {
		out = (wire_gv() & wire_gx());
		putcache("gy", out);
		return out;
	}
}
uint16_t wire_ex() {
	uint16_t out;
	if(iscached("ex"))
		return getcache("ex");
	else {
		out = (wire_ev() | wire_ew());
		putcache("ex", out);
		return out;
	}
}
uint16_t wire_kc() {
	uint16_t out;
	if(iscached("kc"))
		return getcache("kc");
	else {
		out = (wire_jp() & wire_ka());
		putcache("kc", out);
		return out;
	}
}
uint16_t wire_fl() {
	uint16_t out;
	if(iscached("fl"))
		return getcache("fl");
	else {
		out = (wire_fk() | wire_fj());
		putcache("fl", out);
		return out;
	}
}
uint16_t wire_ea() {
	uint16_t out;
	if(iscached("ea"))
		return getcache("ea");
	else {
		out = (wire_dy() >> 3);
		putcache("ea", out);
		return out;
	}
}
uint16_t wire_bt() {
	uint16_t out;
	if(iscached("bt"))
		return getcache("bt");
	else {
		out = ~wire_bs();
		putcache("bt", out);
		return out;
	}
}
uint16_t wire_ah() {
	uint16_t out;
	if(iscached("ah"))
		return getcache("ah");
	else {
		out = ~wire_ag();
		putcache("ah", out);
		return out;
	}
}
uint16_t wire_eh() {
	uint16_t out;
	if(iscached("eh"))
		return getcache("eh");
	else {
		out = (wire_dz() & wire_ef());
		putcache("eh", out);
		return out;
	}
}
uint16_t wire_cz() {
	uint16_t out;
	if(iscached("cz"))
		return getcache("cz");
	else {
		out = (wire_cf() << 1);
		putcache("cz", out);
		return out;
	}
}
uint16_t wire_cw() {
	uint16_t out;
	if(iscached("cw"))
		return getcache("cw");
	else {
		out = ~wire_cv();
		putcache("cw", out);
		return out;
	}
}
uint16_t wire_cy() {
	uint16_t out;
	if(iscached("cy"))
		return getcache("cy");
	else {
		out = (1 & wire_cx());
		putcache("cy", out);
		return out;
	}
}
uint16_t wire_dm() {
	uint16_t out;
	if(iscached("dm"))
		return getcache("dm");
	else {
		out = (wire_de() & wire_dk());
		putcache("dm", out);
		return out;
	}
}
uint16_t wire_cn() {
	uint16_t out;
	if(iscached("cn"))
		return getcache("cn");
	else {
		out = (wire_ck() & wire_cl());
		putcache("cn", out);
		return out;
	}
}
uint16_t wire_aa() {
	uint16_t out;
	if(iscached("aa"))
		return getcache("aa");
	else {
		out = (wire_x() >> 5);
		putcache("aa", out);
		return out;
	}
}
uint16_t wire_ep() {
	uint16_t out;
	if(iscached("ep"))
		return getcache("ep");
	else {
		out = (wire_dv() << 1);
		putcache("ep", out);
		return out;
	}
}
uint16_t wire_hf() {
	uint16_t out;
	if(iscached("hf"))
		return getcache("hf");
	else {
		out = (wire_he() >> 2);
		putcache("hf", out);
		return out;
	}
}
uint16_t wire_bx() {
	uint16_t out;
	if(iscached("bx"))
		return getcache("bx");
	else {
		out = ~wire_bw();
		putcache("bx", out);
		return out;
	}
}
uint16_t wire_cm() {
	uint16_t out;
	if(iscached("cm"))
		return getcache("cm");
	else {
		out = (wire_ck() | wire_cl());
		putcache("cm", out);
		return out;
	}
}
uint16_t wire_bs() {
	uint16_t out;
	if(iscached("bs"))
		return getcache("bs");
	else {
		out = (wire_bp() & wire_bq());
		putcache("bs", out);
		return out;
	}
}
uint16_t wire_be() {
	uint16_t out;
	if(iscached("be"))
		return getcache("be");
	else {
		out = (wire_as() | wire_bd());
		putcache("be", out);
		return out;
	}
}
uint16_t wire_hr() {
	uint16_t out;
	if(iscached("hr"))
		return getcache("hr");
	else {
		out = (wire_he() & wire_hp());
		putcache("hr", out);
		return out;
	}
}
uint16_t wire_ey() {
	uint16_t out;
	if(iscached("ey"))
		return getcache("ey");
	else {
		out = (wire_ev() & wire_ew());
		putcache("ey", out);
		return out;
	}
}
uint16_t wire_lv() {
	uint16_t out;
	if(iscached("lv"))
		return getcache("lv");
	else {
		out = (1 & wire_lu());
		putcache("lv", out);
		return out;
	}
}
uint16_t wire_km() {
	uint16_t out;
	if(iscached("km"))
		return getcache("km");
	else {
		out = (wire_kk() >> 3);
		putcache("km", out);
		return out;
	}
}
uint16_t wire_p() {
	uint16_t out;
	if(iscached("p"))
		return getcache("p");
	else {
		out = (wire_b() & wire_n());
		putcache("p", out);
		return out;
	}
}
uint16_t wire_kd() {
	uint16_t out;
	if(iscached("kd"))
		return getcache("kd");
	else {
		out = ~wire_kc();
		putcache("kd", out);
		return out;
	}
}
uint16_t wire_lw() {
	uint16_t out;
	if(iscached("lw"))
		return getcache("lw");
	else {
		out = (wire_lc() << 1);
		putcache("lw", out);
		return out;
	}
}
uint16_t wire_ko() {
	uint16_t out;
	if(iscached("ko"))
		return getcache("ko");
	else {
		out = (wire_km() | wire_kn());
		putcache("ko", out);
		return out;
	}
}
uint16_t wire_ig() {
	uint16_t out;
	if(iscached("ig"))
		return getcache("ig");
	else {
		out = (wire_id() & wire_if());
		putcache("ig", out);
		return out;
	}
}
uint16_t wire_ik() {
	uint16_t out;
	if(iscached("ik"))
		return getcache("ik");
	else {
		out = (wire_ih() & wire_ij());
		putcache("ik", out);
		return out;
	}
}
uint16_t wire_ju() {
	uint16_t out;
	if(iscached("ju"))
		return getcache("ju");
	else {
		out = (wire_jr() & wire_js());
		putcache("ju", out);
		return out;
	}
}
uint16_t wire_cl() {
	uint16_t out;
	if(iscached("cl"))
		return getcache("cl");
	else {
		out = (wire_ci() >> 5);
		putcache("cl", out);
		return out;
	}
}
uint16_t wire_is() {
	uint16_t out;
	if(iscached("is"))
		return getcache("is");
	else {
		out = (wire_hz() >> 1);
		putcache("is", out);
		return out;
	}
}
uint16_t wire_kf() {
	uint16_t out;
	if(iscached("kf"))
		return getcache("kf");
	else {
		out = (1 & wire_ke());
		putcache("kf", out);
		return out;
	}
}
uint16_t wire_gt() {
	uint16_t out;
	if(iscached("gt"))
		return getcache("gt");
	else {
		out = ~wire_gs();
		putcache("gt", out);
		return out;
	}
}
uint16_t wire_az() {
	uint16_t out;
	if(iscached("az"))
		return getcache("az");
	else {
		out = (wire_aw() & wire_ay());
		putcache("az", out);
		return out;
	}
}
uint16_t wire_y() {
	uint16_t out;
	if(iscached("y"))
		return getcache("y");
	else {
		out = (wire_x() >> 2);
		putcache("y", out);
		return out;
	}
}
uint16_t wire_ae() {
	uint16_t out;
	if(iscached("ae"))
		return getcache("ae");
	else {
		out = (wire_ab() & wire_ad());
		putcache("ae", out);
		return out;
	}
}
uint16_t wire_fi() {
	uint16_t out;
	if(iscached("fi"))
		return getcache("fi");
	else {
		out = (wire_ff() & wire_fh());
		putcache("fi", out);
		return out;
	}
}
uint16_t wire_cv() {
	uint16_t out;
	if(iscached("cv"))
		return getcache("cv");
	else {
		out = (wire_ci() & wire_ct());
		putcache("cv", out);
		return out;
	}
}
uint16_t wire_fk() {
	uint16_t out;
	if(iscached("fk"))
		return getcache("fk");
	else {
		out = (wire_eq() << 1);
		putcache("fk", out);
		return out;
	}
}
uint16_t wire_gl() {
	uint16_t out;
	if(iscached("gl"))
		return getcache("gl");
	else {
		out = (wire_gj() >> 3);
		putcache("gl", out);
		return out;
	}
}
uint16_t wire_ao() {
	uint16_t out;
	if(iscached("ao"))
		return getcache("ao");
	else {
		out = (wire_u() << 1);
		putcache("ao", out);
		return out;
	}
}
uint16_t wire_bc() {
	uint16_t out;
	if(iscached("bc"))
		return getcache("bc");
	else {
		out = ~wire_bb();
		putcache("bc", out);
		return out;
	}
}
uint16_t wire_hk() {
	uint16_t out;
	if(iscached("hk"))
		return getcache("hk");
	else {
		out = ~wire_hj();
		putcache("hk", out);
		return out;
	}
}
uint16_t wire_kz() {
	uint16_t out;
	if(iscached("kz"))
		return getcache("kz");
	else {
		out = (wire_kw() & wire_ky());
		putcache("kz", out);
		return out;
	}
}
uint16_t wire_bf() {
	uint16_t out;
	if(iscached("bf"))
		return getcache("bf");
	else {
		out = (wire_as() & wire_bd());
		putcache("bf", out);
		return out;
	}
}
uint16_t wire_dy() {
	uint16_t out;
	if(iscached("dy"))
		return getcache("dy");
	else {
		out = (wire_dw() | wire_dx());
		putcache("dy", out);
		return out;
	}
}
uint16_t wire_bu() {
	uint16_t out;
	if(iscached("bu"))
		return getcache("bu");
	else {
		out = (wire_br() & wire_bt());
		putcache("bu", out);
		return out;
	}
}
uint16_t wire_kx() {
	uint16_t out;
	if(iscached("kx"))
		return getcache("kx");
	else {
		out = (wire_kk() & wire_kv());
		putcache("kx", out);
		return out;
	}
}
uint16_t wire_eq() {
	uint16_t out;
	if(iscached("eq"))
		return getcache("eq");
	else {
		out = (wire_ep() | wire_eo());
		putcache("eq", out);
		return out;
	}
}
uint16_t wire_hx() {
	uint16_t out;
	if(iscached("hx"))
		return getcache("hx");
	else {
		out = (wire_he() >> 1);
		putcache("hx", out);
		return out;
	}
}
uint16_t wire_kk() {
	uint16_t out;
	if(iscached("kk"))
		return getcache("kk");
	else {
		out = (wire_ki() | wire_kj());
		putcache("kk", out);
		return out;
	}
}
uint16_t wire_jv() {
	uint16_t out;
	if(iscached("jv"))
		return getcache("jv");
	else {
		out = ~wire_ju();
		putcache("jv", out);
		return out;
	}
}
uint16_t wire_en() {
	uint16_t out;
	if(iscached("en"))
		return getcache("en");
	else {
		out = (wire_ek() & wire_em());
		putcache("en", out);
		return out;
	}
}
uint16_t wire_kn() {
	uint16_t out;
	if(iscached("kn"))
		return getcache("kn");
	else {
		out = (wire_kk() >> 5);
		putcache("kn", out);
		return out;
	}
}
uint16_t wire_ei() {
	uint16_t out;
	if(iscached("ei"))
		return getcache("ei");
	else {
		out = ~wire_eh();
		putcache("ei", out);
		return out;
	}
}
uint16_t wire_hz() {
	uint16_t out;
	if(iscached("hz"))
		return getcache("hz");
	else {
		out = (wire_hx() | wire_hy());
		putcache("hz", out);
		return out;
	}
}
uint16_t wire_ec() {
	uint16_t out;
	if(iscached("ec"))
		return getcache("ec");
	else {
		out = (wire_ea() | wire_eb());
		putcache("ec", out);
		return out;
	}
}
uint16_t wire_w() {
	uint16_t out;
	if(iscached("w"))
		return getcache("w");
	else {
		out = (wire_s() << 15);
		putcache("w", out);
		return out;
	}
}
uint16_t wire_gh() {
	uint16_t out;
	if(iscached("gh"))
		return getcache("gh");
	else {
		out = (wire_fo() >> 1);
		putcache("gh", out);
		return out;
	}
}
uint16_t wire_kw() {
	uint16_t out;
	if(iscached("kw"))
		return getcache("kw");
	else {
		out = (wire_kk() | wire_kv());
		putcache("kw", out);
		return out;
	}
}
uint16_t wire_bq() {
	uint16_t out;
	if(iscached("bq"))
		return getcache("bq");
	else {
		out = (wire_bn() >> 5);
		putcache("bq", out);
		return out;
	}
}
uint16_t wire_ee() {
	uint16_t out;
	if(iscached("ee"))
		return getcache("ee");
	else {
		out = ~wire_ed();
		putcache("ee", out);
		return out;
	}
}
uint16_t wire_hu() {
	uint16_t out;
	if(iscached("hu"))
		return getcache("hu");
	else {
		out = (1 & wire_ht());
		putcache("hu", out);
		return out;
	}
}
uint16_t wire_cx() {
	uint16_t out;
	if(iscached("cx"))
		return getcache("cx");
	else {
		out = (wire_cu() & wire_cw());
		putcache("cx", out);
		return out;
	}
}
uint16_t wire_f() {
	uint16_t out;
	if(iscached("f"))
		return getcache("f");
	else {
		out = (wire_b() >> 5);
		putcache("f", out);
		return out;
	}
}
uint16_t wire_kt() {
	uint16_t out;
	if(iscached("kt"))
		return getcache("kt");
	else {
		out = (wire_kl() & wire_kr());
		putcache("kt", out);
		return out;
	}
}
uint16_t wire_ir() {
	uint16_t out;
	if(iscached("ir"))
		return getcache("ir");
	else {
		out = (wire_iq() | wire_ip());
		putcache("ir", out);
		return out;
	}
}
uint16_t wire_cj() {
	uint16_t out;
	if(iscached("cj"))
		return getcache("cj");
	else {
		out = (wire_ci() >> 2);
		putcache("cj", out);
		return out;
	}
}
uint16_t wire_cq() {
	uint16_t out;
	if(iscached("cq"))
		return getcache("cq");
	else {
		out = (wire_cj() | wire_cp());
		putcache("cq", out);
		return out;
	}
}
uint16_t wire_r() {
	uint16_t out;
	if(iscached("r"))
		return getcache("r");
	else {
		out = (wire_o() & wire_q());
		putcache("r", out);
		return out;
	}
}
uint16_t wire_dg() {
	uint16_t out;
	if(iscached("dg"))
		return getcache("dg");
	else {
		out = (wire_dd() >> 5);
		putcache("dg", out);
		return out;
	}
}
uint16_t wire_d() {
	uint16_t out;
	if(iscached("d"))
		return getcache("d");
	else {
		out = (wire_b() >> 2);
		putcache("d", out);
		return out;
	}
}
uint16_t wire_kv() {
	uint16_t out;
	if(iscached("kv"))
		return getcache("kv");
	else {
		out = (wire_ks() & wire_ku());
		putcache("kv", out);
		return out;
	}
}
uint16_t wire_e() {
	uint16_t out;
	if(iscached("e"))
		return getcache("e");
	else {
		out = (wire_b() >> 3);
		putcache("e", out);
		return out;
	}
}
uint16_t wire_k() {
	uint16_t out;
	if(iscached("k"))
		return getcache("k");
	else {
		out = (wire_d() | wire_j());
		putcache("k", out);
		return out;
	}
}
uint16_t wire_q() {
	uint16_t out;
	if(iscached("q"))
		return getcache("q");
	else {
		out = ~wire_p();
		putcache("q", out);
		return out;
	}
}
uint16_t wire_cs() {
	uint16_t out;
	if(iscached("cs"))
		return getcache("cs");
	else {
		out = ~wire_cr();
		putcache("cs", out);
		return out;
	}
}
uint16_t wire_dv() {
	uint16_t out;
	if(iscached("dv"))
		return getcache("dv");
	else {
		out = (wire_du() | wire_dt());
		putcache("dv", out);
		return out;
	}
}
uint16_t wire_kj() {
	uint16_t out;
	if(iscached("kj"))
		return getcache("kj");
	else {
		out = (wire_kf() << 15);
		putcache("kj", out);
		return out;
	}
}
uint16_t wire_ad() {
	uint16_t out;
	if(iscached("ad"))
		return getcache("ad");
	else {
		out = ~wire_ac();
		putcache("ad", out);
		return out;
	}
}
uint16_t wire_fr() {
	uint16_t out;
	if(iscached("fr"))
		return getcache("fr");
	else {
		out = (wire_fo() >> 5);
		putcache("fr", out);
		return out;
	}
}
uint16_t wire_il() {
	uint16_t out;
	if(iscached("il"))
		return getcache("il");
	else {
		out = (wire_hz() | wire_ik());
		putcache("il", out);
		return out;
	}
}
uint16_t wire_ka() {
	uint16_t out;
	if(iscached("ka"))
		return getcache("ka");
	else {
		out = (wire_jx() & wire_jz());
		putcache("ka", out);
		return out;
	}
}
uint16_t wire_gj() {
	uint16_t out;
	if(iscached("gj"))
		return getcache("gj");
	else {
		out = (wire_gh() | wire_gi());
		putcache("gj", out);
		return out;
	}
}
uint16_t wire_ld() {
	uint16_t out;
	if(iscached("ld"))
		return getcache("ld");
	else {
		out = (wire_kk() >> 1);
		putcache("ld", out);
		return out;
	}
}
uint16_t wire_ic() {
	uint16_t out;
	if(iscached("ic"))
		return getcache("ic");
	else {
		out = (wire_hz() >> 5);
		putcache("ic", out);
		return out;
	}
}
uint16_t wire_at() {
	uint16_t out;
	if(iscached("at"))
		return getcache("at");
	else {
		out = (wire_as() >> 2);
		putcache("at", out);
		return out;
	}
}
uint16_t wire_jz() {
	uint16_t out;
	if(iscached("jz"))
		return getcache("jz");
	else {
		out = ~wire_jy();
		putcache("jz", out);
		return out;
	}
}
uint16_t wire_an() {
	uint16_t out;
	if(iscached("an"))
		return getcache("an");
	else {
		out = (1 & wire_am());
		putcache("an", out);
		return out;
	}
}
uint16_t wire_cu() {
	uint16_t out;
	if(iscached("cu"))
		return getcache("cu");
	else {
		out = (wire_ci() | wire_ct());
		putcache("cu", out);
		return out;
	}
}
uint16_t wire_hj() {
	uint16_t out;
	if(iscached("hj"))
		return getcache("hj");
	else {
		out = (wire_hg() & wire_hh());
		putcache("hj", out);
		return out;
	}
}
uint16_t wire_jx() {
	uint16_t out;
	if(iscached("jx"))
		return getcache("jx");
	else {
		out = (wire_jq() | wire_jw());
		putcache("jx", out);
		return out;
	}
}
uint16_t wire_x() {
	uint16_t out;
	if(iscached("x"))
		return getcache("x");
	else {
		out = (wire_v() | wire_w());
		putcache("x", out);
		return out;
	}
}
uint16_t wire_le() {
	uint16_t out;
	if(iscached("le"))
		return getcache("le");
	else {
		out = (wire_la() << 15);
		putcache("le", out);
		return out;
	}
}
uint16_t wire_dk() {
	uint16_t out;
	if(iscached("dk"))
		return getcache("dk");
	else {
		out = (wire_dh() & wire_dj());
		putcache("dk", out);
		return out;
	}
}
uint16_t wire_ds() {
	uint16_t out;
	if(iscached("ds"))
		return getcache("ds");
	else {
		out = (wire_dp() & wire_dr());
		putcache("ds", out);
		return out;
	}
}
uint16_t wire_jy() {
	uint16_t out;
	if(iscached("jy"))
		return getcache("jy");
	else {
		out = (wire_jq() & wire_jw());
		putcache("jy", out);
		return out;
	}
}
uint16_t wire_aw() {
	uint16_t out;
	if(iscached("aw"))
		return getcache("aw");
	else {
		out = (wire_au() | wire_av());
		putcache("aw", out);
		return out;
	}
}
uint16_t wire_bg() {
	uint16_t out;
	if(iscached("bg"))
		return getcache("bg");
	else {
		out = ~wire_bf();
		putcache("bg", out);
		return out;
	}
}
uint16_t wire_ab() {
	uint16_t out;
	if(iscached("ab"))
		return getcache("ab");
	else {
		out = (wire_z() | wire_aa());
		putcache("ab", out);
		return out;
	}
}
uint16_t wire_gd() {
	uint16_t out;
	if(iscached("gd"))
		return getcache("gd");
	else {
		out = (wire_ga() & wire_gc());
		putcache("gd", out);
		return out;
	}
}
uint16_t wire_im() {
	uint16_t out;
	if(iscached("im"))
		return getcache("im");
	else {
		out = (wire_hz() & wire_ik());
		putcache("im", out);
		return out;
	}
}
uint16_t wire_jw() {
	uint16_t out;
	if(iscached("jw"))
		return getcache("jw");
	else {
		out = (wire_jt() & wire_jv());
		putcache("jw", out);
		return out;
	}
}
uint16_t wire_ac() {
	uint16_t out;
	if(iscached("ac"))
		return getcache("ac");
	else {
		out = (wire_z() & wire_aa());
		putcache("ac", out);
		return out;
	}
}
uint16_t wire_jt() {
	uint16_t out;
	if(iscached("jt"))
		return getcache("jt");
	else {
		out = (wire_jr() | wire_js());
		putcache("jt", out);
		return out;
	}
}
uint16_t wire_hv() {
	uint16_t out;
	if(iscached("hv"))
		return getcache("hv");
	else {
		out = (wire_hb() << 1);
		putcache("hv", out);
		return out;
	}
}
uint16_t wire_hm() {
	uint16_t out;
	if(iscached("hm"))
		return getcache("hm");
	else {
		out = (wire_hf() | wire_hl());
		putcache("hm", out);
		return out;
	}
}
uint16_t wire_id() {
	uint16_t out;
	if(iscached("id"))
		return getcache("id");
	else {
		out = (wire_ib() | wire_ic());
		putcache("id", out);
		return out;
	}
}
uint16_t wire_fs() {
	uint16_t out;
	if(iscached("fs"))
		return getcache("fs");
	else {
		out = (wire_fq() | wire_fr());
		putcache("fs", out);
		return out;
	}
}
uint16_t wire_ct() {
	uint16_t out;
	if(iscached("ct"))
		return getcache("ct");
	else {
		out = (wire_cq() & wire_cs());
		putcache("ct", out);
		return out;
	}
}
uint16_t wire_ih() {
	uint16_t out;
	if(iscached("ih"))
		return getcache("ih");
	else {
		out = (wire_ia() | wire_ig());
		putcache("ih", out);
		return out;
	}
}
uint16_t wire_dp() {
	uint16_t out;
	if(iscached("dp"))
		return getcache("dp");
	else {
		out = (wire_dd() | wire_do());
		putcache("dp", out);
		return out;
	}
}
uint16_t wire_l() {
	uint16_t out;
	if(iscached("l"))
		return getcache("l");
	else {
		out = (wire_d() & wire_j());
		putcache("l", out);
		return out;
	}
}
uint16_t wire_ie() {
	uint16_t out;
	if(iscached("ie"))
		return getcache("ie");
	else {
		out = (wire_ib() & wire_ic());
		putcache("ie", out);
		return out;
	}
}
uint16_t wire_au() {
	uint16_t out;
	if(iscached("au"))
		return getcache("au");
	else {
		out = (wire_as() >> 3);
		putcache("au", out);
		return out;
	}
}
uint16_t wire_bh() {
	uint16_t out;
	if(iscached("bh"))
		return getcache("bh");
	else {
		out = (wire_be() & wire_bg());
		putcache("bh", out);
		return out;
	}
}
uint16_t wire_dq() {
	uint16_t out;
	if(iscached("dq"))
		return getcache("dq");
	else {
		out = (wire_dd() & wire_do());
		putcache("dq", out);
		return out;
	}
}
uint16_t wire_m() {
	uint16_t out;
	if(iscached("m"))
		return getcache("m");
	else {
		out = ~wire_l();
		putcache("m", out);
		return out;
	}
}
uint16_t wire_ge() {
	uint16_t out;
	if(iscached("ge"))
		return getcache("ge");
	else {
		out = (1 & wire_gd());
		putcache("ge", out);
		return out;
	}
}
uint16_t wire_ag() {
	uint16_t out;
	if(iscached("ag"))
		return getcache("ag");
	else {
		out = (wire_y() & wire_ae());
		putcache("ag", out);
		return out;
	}
}
uint16_t wire_gb() {
	uint16_t out;
	if(iscached("gb"))
		return getcache("gb");
	else {
		out = (wire_fo() & wire_fz());
		putcache("gb", out);
		return out;
	}
}
uint16_t wire_if() {
	uint16_t out;
	if(iscached("if"))
		return getcache("if");
	else {
		out = ~wire_ie();
		putcache("if", out);
		return out;
	}
}
uint16_t wire_h() {
	uint16_t out;
	if(iscached("h"))
		return getcache("h");
	else {
		out = (wire_e() & wire_f());
		putcache("h", out);
		return out;
	}
}
uint16_t wire_z() {
	uint16_t out;
	if(iscached("z"))
		return getcache("z");
	else {
		out = (wire_x() >> 3);
		putcache("z", out);
		return out;
	}
}
uint16_t wire_af() {
	uint16_t out;
	if(iscached("af"))
		return getcache("af");
	else {
		out = (wire_y() | wire_ae());
		putcache("af", out);
		return out;
	}
}
uint16_t wire_hn() {
	uint16_t out;
	if(iscached("hn"))
		return getcache("hn");
	else {
		out = (wire_hf() & wire_hl());
		putcache("hn", out);
		return out;
	}
}
uint16_t wire_i() {
	uint16_t out;
	if(iscached("i"))
		return getcache("i");
	else {
		out = ~wire_h();
		putcache("i", out);
		return out;
	}
}
uint16_t wire_ho() {
	uint16_t out;
	if(iscached("ho"))
		return getcache("ho");
	else {
		out = ~wire_hn();
		putcache("ho", out);
		return out;
	}
}
uint16_t wire_hh() {
	uint16_t out;
	if(iscached("hh"))
		return getcache("hh");
	else {
		out = (wire_he() >> 5);
		putcache("hh", out);
		return out;
	}
}

int main() {
	cache = (uint16_t*) malloc(26*26*sizeof(uint16_t));
	incache = (char*) malloc(26*26*sizeof(char));
	memset(incache, 0, 26*26);
	printf("Value of wire a: %d\n", wire_a());
	free(cache);
	free(incache);
}
