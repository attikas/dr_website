#include "Home.h"
#include "consts.h"
void Home::index(const HttpRequestPtr &req,
                 std::function<void(const HttpResponsePtr &)> &&callback) const
{
    HttpViewData data;
    auto acceptLanguage = req->getHeader("Accept-Language");

    data.insert("lang", LANG_EN);
    data.insert("title", TITLE_EN);
    data.insert("keywords", KEYWORDS_EN);
    data.insert("description", "C++ powerful web framework build on C++14/17");
    data.insert("home", HOME_EN);
    data.insert("docs", DOC_EN);
    data.insert("forum", FORUM_EN);
    data.insert("detail", DETAIL_EN);
    data.insert("reverseurl", "en");
    data.insert("reverse", "English");

    auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
    callback(resp);
}

void Home::en(const HttpRequestPtr &req,
              std::function<void(const HttpResponsePtr &)> &&callback) const
{
    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", LANG_EN);
    data.insert("title", TITLE_EN);
    data.insert("keywords", KEYWORDS_EN);
    data.insert("description", DESCRIPTION_EN);
    data.insert("home", HOME_EN);
    data.insert("docs", DOC_EN);
    data.insert("forum", FORUM_EN);
    data.insert("detail", DETAIL_EN);
    data.insert("reverseurl", REVERSE_URL_EN);
    data.insert("reverse", REVERSE_EN);

    auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
    callback(resp);
}

void Home::zh(const HttpRequestPtr &req,
              std::function<void(const HttpResponsePtr &)> &&callback) const
{
    auto para = req->getParameters();
    HttpViewData data;
    data.insert("lang", LANG_EN);
    data.insert("title", TITLE_EN);
    data.insert("keywords", KEYWORDS_EN);
    data.insert("description", "C++ powerful web framework build on C++14/17");
    data.insert("home", HOME_EN);
    data.insert("docs", DOC_EN);
    data.insert("forum", FORUM_EN);
    data.insert("detail", DETAIL_EN);
    data.insert("reverseurl", REVERSE_URL_EN);
    data.insert("reverse", REVERSE_EN);

    auto resp = HttpResponse::newHttpViewResponse("home.csp", data);
    callback(resp);
}