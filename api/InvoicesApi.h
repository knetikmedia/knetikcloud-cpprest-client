/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * InvoicesApi.h
 *
 * 
 */

#ifndef InvoicesApi_H_
#define InvoicesApi_H_


#include "ApiClient.h"

#include "AddressResource.h"
#include "InvoiceCreateRequest.h"
#include "InvoicePaymentStatusRequest.h"
#include "InvoiceResource.h"
#include "PageResource«InvoiceLogEntry».h"
#include "PageResource«InvoiceResource».h"
#include "PayBySavedMethodRequest.h"
#include "Result.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace api {

using namespace io::swagger::client::model;

class  InvoicesApi
{
public:
    InvoicesApi( std::shared_ptr<ApiClient> apiClient );
    virtual ~InvoicesApi();
    /// <summary>
    /// Create an invoice
    /// </summary>
    /// <remarks>
    /// Create an invoice(s) by providing a cart GUID. Note that there may be multiple invoices created, one per vendor.
    /// </remarks>
    /// <param name="req">Invoice to be created (optional)</param>
    pplx::task<std::vector<std::shared_ptr<InvoiceResource>>> createInvoice(std::shared_ptr<InvoiceCreateRequest> req);
    /// <summary>
    /// Lists available fulfillment statuses
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::vector<utility::string_t>> getFulFillmentStatuses();
    /// <summary>
    /// Retrieve an invoice
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>
    pplx::task<std::shared_ptr<InvoiceResource>> getInvoice(int32_t id);
    /// <summary>
    /// List invoice logs
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«InvoiceLogEntry»>> getInvoiceLogs(int32_t id, int32_t size, int32_t page);
    /// <summary>
    /// Retrieve invoices
    /// </summary>
    /// <remarks>
    /// Without INVOICES_ADMIN permission the results are automatically filtered for only the logged in user&#39;s invoices. It is recomended however that filter_user be added to avoid issues for admin users accidentally getting additional invoices.
    /// </remarks>
    /// <param name="filterUser">The id of a user to get invoices for. Automtically added if not being called with admin permissions. (optional)</param>/// <param name="filterEmail">Filters invoices by customer&#39;s email. Admins only. (optional)</param>/// <param name="filterFulfillmentStatus">Filters invoices by fulfillment status type. Can be a comma separated list of statuses (optional)</param>/// <param name="filterPaymentStatus">Filters invoices by payment status type. Can be a comma separated list of statuses (optional)</param>/// <param name="filterItemName">Filters invoices by item name containing the given string (optional)</param>/// <param name="filterExternalRef">Filters invoices by external reference. (optional)</param>/// <param name="filterCreatedDate">Filters invoices by creation date. Multiple values possible for range search. Format: filter_created_date&#x3D;OP,ts&amp;... where OP in (GT, LT, GOE, LOE, EQ) and ts is a unix timestamp in seconds. Ex: filter_created_date&#x3D;GT,1452154258,LT,1554254874 (optional)</param>/// <param name="filterVendorIds">Filters invoices for ones from one of the vendors whose id is in the given comma separated list (optional)</param>/// <param name="filterCurrency">Filters invoices by currency. ISO3 currency code (optional)</param>/// <param name="filterShippingStateName">Filters invoices by shipping address: Exact match state name (optional)</param>/// <param name="filterShippingCountryName">Filters invoices by shipping address: Exact match country name (optional)</param>/// <param name="filterShipping">Filters invoices by shipping price (optional)</param>/// <param name="filterVendorName">Filters invoices by vendor name starting with given string (optional)</param>/// <param name="filterSku">Filters invoices by item sku (optional)</param>/// <param name="size">The number of objects returned per page (optional, default to 25)</param>/// <param name="page">The number of the page returned, starting with 1 (optional, default to 1)</param>/// <param name="order">A comma separated list of sorting requirements in priority order, each entry matching PROPERTY_NAME:[ASC|DESC] (optional, default to 1)</param>
    pplx::task<std::shared_ptr<PageResource«InvoiceResource»>> getInvoices(int32_t filterUser, utility::string_t filterEmail, utility::string_t filterFulfillmentStatus, utility::string_t filterPaymentStatus, utility::string_t filterItemName, utility::string_t filterExternalRef, utility::string_t filterCreatedDate, utility::string_t filterVendorIds, utility::string_t filterCurrency, utility::string_t filterShippingStateName, utility::string_t filterShippingCountryName, float filterShipping, utility::string_t filterVendorName, utility::string_t filterSku, int32_t size, int32_t page, utility::string_t order);
    /// <summary>
    /// Lists available payment statuses
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    
    pplx::task<std::vector<utility::string_t>> getPaymentStatuses();
    /// <summary>
    /// Trigger payment of an invoice
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="request">Payment info (optional)</param>
    pplx::task<void> payInvoice(int32_t id, std::shared_ptr<PayBySavedMethodRequest> request);
    /// <summary>
    /// Set the external reference of an invoice
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="externalRef">External reference info (optional)</param>
    pplx::task<void> setExternalRef(int32_t id, utility::string_t externalRef);
    /// <summary>
    /// Set the fulfillment status of an invoice item
    /// </summary>
    /// <remarks>
    /// This allows external fulfillment systems to report success or failure. Fulfillment status changes are restricted by a specific flow determining which status can lead to which.
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="sku">The sku of an item in the invoice</param>/// <param name="status">The new fulfillment status for the item. Additional options may be available based on configuration.  Allowable values:  &#39;unfulfilled&#39;, &#39;fulfilled&#39;, &#39;not fulfillable&#39;, &#39;failed&#39;, &#39;processing&#39;, &#39;failed_permanent&#39;, &#39;delayed&#39;</param>
    pplx::task<void> setInvoiceItemFulfillmentStatus(int32_t id, utility::string_t sku, utility::string_t status);
    /// <summary>
    /// Set the order notes of an invoice
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="orderNotes">Payment status info (optional)</param>
    pplx::task<void> setOrderNotes(int32_t id, utility::string_t orderNotes);
    /// <summary>
    /// Set the payment status of an invoice
    /// </summary>
    /// <remarks>
    /// This may trigger fulfillment if setting the status to &#39;paid&#39;. This is mainly intended to support external payment systems that cannot be incorporated into the payment method system. Payment status changes are restricted by a specific flow determining which status can lead to which.
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="request">Payment status info (optional)</param>
    pplx::task<void> setPaymentStatus(int32_t id, std::shared_ptr<InvoicePaymentStatusRequest> request);
    /// <summary>
    /// Set or update billing info
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="id">The id of the invoice</param>/// <param name="billingInfoRequest">Address info (optional)</param>
    pplx::task<void> updateBillingInfo(int32_t id, std::shared_ptr<AddressResource> billingInfoRequest);

protected:
    std::shared_ptr<ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* InvoicesApi_H_ */

