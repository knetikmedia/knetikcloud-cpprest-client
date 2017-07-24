/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * ReportingSubscriptionsApi.h
 *
 * 
 */

#ifndef ReportingSubscriptionsApi_H_
#define ReportingSubscriptionsApi_H_


#include "ApiClient.h"

#include "PageResource«BillingReport».h"
#include "Result.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  ReportingSubscriptionsApi
{
public:
    ReportingSubscriptionsApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~ReportingSubscriptionsApi();
    /// <summary>
    /// Get a list of available subscription reports in most recent first order
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«BillingReport»>> getSubscriptionReports(int32_t size, int32_t page);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* ReportingSubscriptionsApi_H_ */

