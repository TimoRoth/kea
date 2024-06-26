SUBDIRS = .

AM_CPPFLAGS = -I$(top_builddir)/src/lib -I$(top_srcdir)/src/lib
AM_CPPFLAGS += $(BOOST_INCLUDES)
AM_CPPFLAGS += -DTEST_DATA_BUILDDIR=\"$(abs_top_builddir)/src/lib/dhcp/tests\"
AM_CPPFLAGS += -DINSTALL_PROG=\"$(abs_top_srcdir)/install-sh\"

AM_CXXFLAGS = $(KEA_CXXFLAGS)

if USE_STATIC_LINK
AM_LDFLAGS = -static
endif

CLEANFILES = *.gcno *.gcda

TESTS_ENVIRONMENT = $(LIBTOOL) --mode=execute $(VALGRIND_COMMAND)

TESTS =
if HAVE_GTEST

TESTS += libdhcp++_unittests

libdhcp___unittests_SOURCES  = run_unittests.cc
libdhcp___unittests_SOURCES += classify_unittest.cc
libdhcp___unittests_SOURCES += duid_factory_unittest.cc
libdhcp___unittests_SOURCES += hwaddr_unittest.cc
libdhcp___unittests_SOURCES += iface_mgr_unittest.cc
libdhcp___unittests_SOURCES += libdhcp++_unittest.cc
libdhcp___unittests_SOURCES += opaque_data_tuple_unittest.cc
libdhcp___unittests_SOURCES += option4_addrlst_unittest.cc
libdhcp___unittests_SOURCES += option4_client_fqdn_unittest.cc
libdhcp___unittests_SOURCES += option4_dnr_unittest.cc
libdhcp___unittests_SOURCES += option6_addrlst_unittest.cc
libdhcp___unittests_SOURCES += option6_client_fqdn_unittest.cc
libdhcp___unittests_SOURCES += option6_auth_unittest.cc
libdhcp___unittests_SOURCES += option6_dnr_unittest.cc
libdhcp___unittests_SOURCES += option6_ia_unittest.cc
libdhcp___unittests_SOURCES += option6_iaaddr_unittest.cc
libdhcp___unittests_SOURCES += option6_iaprefix_unittest.cc
libdhcp___unittests_SOURCES += option6_pdexclude_unittest.cc
libdhcp___unittests_SOURCES += option6_status_code_unittest.cc
libdhcp___unittests_SOURCES += option_int_unittest.cc
libdhcp___unittests_SOURCES += option_int_array_unittest.cc
libdhcp___unittests_SOURCES += option_data_types_unittest.cc
libdhcp___unittests_SOURCES += option_definition_unittest.cc
libdhcp___unittests_SOURCES += option_classless_static_route_unittest.cc
libdhcp___unittests_SOURCES += option_copy_unittest.cc
libdhcp___unittests_SOURCES += option_custom_unittest.cc
libdhcp___unittests_SOURCES += option_opaque_data_tuples_unittest.cc
libdhcp___unittests_SOURCES += option_unittest.cc
libdhcp___unittests_SOURCES += option_space_unittest.cc
libdhcp___unittests_SOURCES += option_string_unittest.cc
libdhcp___unittests_SOURCES += option_vendor_unittest.cc
libdhcp___unittests_SOURCES += option_vendor_class_unittest.cc
libdhcp___unittests_SOURCES += packet_queue4_unittest.cc
libdhcp___unittests_SOURCES += packet_queue6_unittest.cc
libdhcp___unittests_SOURCES += packet_queue_mgr4_unittest.cc
libdhcp___unittests_SOURCES += packet_queue_mgr6_unittest.cc
libdhcp___unittests_SOURCES += packet_queue_testutils.h
libdhcp___unittests_SOURCES += pkt4_unittest.cc
libdhcp___unittests_SOURCES += pkt6_unittest.cc
libdhcp___unittests_SOURCES += pkt4o6_unittest.cc
libdhcp___unittests_SOURCES += pkt_filter_unittest.cc
libdhcp___unittests_SOURCES += pkt_filter_inet_unittest.cc
libdhcp___unittests_SOURCES += pkt_filter_inet6_unittest.cc
libdhcp___unittests_SOURCES += pkt_filter_test_utils.h pkt_filter_test_utils.cc
libdhcp___unittests_SOURCES += pkt_filter6_test_utils.h pkt_filter6_test_utils.cc

# Utilize Linux Packet Filtering on Linux.
if OS_LINUX
libdhcp___unittests_SOURCES += pkt_filter_lpf_unittest.cc
endif

# Utilize Berkeley Packet Filtering on BSD.
if OS_BSD
libdhcp___unittests_SOURCES += pkt_filter_bpf_unittest.cc
endif

libdhcp___unittests_SOURCES += protocol_util_unittest.cc
libdhcp___unittests_SOURCES += duid_unittest.cc

libdhcp___unittests_CPPFLAGS = $(AM_CPPFLAGS) $(GTEST_INCLUDES)

libdhcp___unittests_LDFLAGS  = $(AM_LDFLAGS) $(CRYPTO_LDFLAGS) $(GTEST_LDFLAGS)

libdhcp___unittests_CXXFLAGS = $(AM_CXXFLAGS)

libdhcp___unittests_LDADD  = $(top_builddir)/src/lib/dhcp/testutils/libdhcptest.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/dhcp/libkea-dhcp++.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/hooks/libkea-hooks.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/testutils/libkea-testutils.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/cc/libkea-cc.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/asiolink/libkea-asiolink.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/dns/libkea-dns++.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/cryptolink/libkea-cryptolink.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/log/libkea-log.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/util/unittests/libutil_unittests.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/util/libkea-util.la
libdhcp___unittests_LDADD += $(top_builddir)/src/lib/exceptions/libkea-exceptions.la
libdhcp___unittests_LDADD += $(LOG4CPLUS_LIBS) $(CRYPTO_LIBS)
libdhcp___unittests_LDADD += $(BOOST_LIBS) $(GTEST_LDADD)
endif

noinst_PROGRAMS = $(TESTS)
