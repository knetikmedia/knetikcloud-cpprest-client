/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Payments_AppleApi.h
 *
 * 
 */

#ifndef Payments_AppleApi_H_
#define Payments_AppleApi_H_


#include "ApiClient.h"

#include "ApplyPaymentRequest.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace api {

using namespace com::knetikcloud::client::model;

class  Payments_AppleApi
{
public:
    Payments_AppleApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~Payments_AppleApi();
    /// <summary>
    /// Pay invoice with Apple receipt
    /// </summary>
    /// <remarks>
    /// Mark an invoice paid using Apple payment receipt. A receipt will only be accepted once and the details of the transaction must match the invoice, including the product_id matching the sku text of the item in the invoice. Returns the transaction ID if successful. &lt;br&gt;&lt;br&gt;&lt;b&gt;Permissions Needed:&lt;/b&gt; ANY
    /// </remarks>
    /// <param name="request">The request for paying an invoice through an Apple receipt (optional)</param>
    pplx::task<utility::string_t> verifyAppleReceipt(std::shared_ptr<ApplyPaymentRequest> request);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* Payments_AppleApi_H_ */

